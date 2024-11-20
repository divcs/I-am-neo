#include <iostream>
#include <string>
#include <cctype>
#include <exception>

class PasswordException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Caught by exception, invalid password format!";
    }
};

void validatePassword(const std::string& username, const std::string& password) {
    try {
        // Check username length
        if (username.length() > 50) {
            throw PasswordException();
        }

        // Check password length
        if (password.length() < 6) {
            std::cout << "Password must be at least 6 characters long." << std::endl;
            throw PasswordException();
        }

        // Check if password contains at least one digit
        bool hasDigit = false;
        for (char ch : password) {
            if (std::isdigit(ch)) {
                hasDigit = true;
                break;
            }
        }

        if (!hasDigit) {
            std::cout << "Password must have at least One digit (0-9)" << std::endl;
            throw PasswordException();
        }

        // If all checks pass
        std::cout << "Password is correct" << std::endl;

    } catch (const PasswordException& e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    std::string username, password;

    // Input username and password
    std::getline(std::cin, username);
    std::getline(std::cin, password);

    // Validate password
    validatePassword(username, password);

    return 0;
}
