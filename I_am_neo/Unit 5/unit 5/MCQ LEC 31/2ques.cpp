#include <iostream>
using namespace std;
class Vector3D {
public:
    Vector3D(int x, int y, int z) : xCoord(x), yCoord(y), zCoord(z) {}
    int dotProduct(Vector3D& other) { return xCoord * other.xCoord + yCoord * other.yCoord + zCoord * other.zCoord; }
private:
    int xCoord, yCoord, zCoord;
};

int main() {
    Vector3D* v1 = new Vector3D(1, 2, 3);
    Vector3D* v2 = new Vector3D(4, 5, 6);
    int result = v1->dotProduct(*v2);
    delete v1;
    delete v2;
    std::cout << result;
    return 0;
}