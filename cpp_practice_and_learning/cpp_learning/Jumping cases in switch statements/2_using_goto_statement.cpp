// In C or C++, you can use the goto statement within a switch statement to jump to a label outside of the switch, then re - enter at a different case.

#include <stdio.h>

int main()
{
 int value = 1;

 switch (value)
 {
 case 1:
  printf("Case 1\n");
  value = 3;         // Set value to the next case we want to jump to
  goto jump_to_case; // Jump to the label
 case 2:
  printf("Case 2\n");
  break;
 case 3:
 jump_to_case: // Label to jump to
  printf("Case 3\n");
  break;
 default:
  printf("Default case\n");
 }

 return 0;
}

// In this example, goto jump_to_case; will exit case 1 and jump to the label jump_to_case within case 3.

#include <stdio.h>

int main()
{
 int value = 1;

 switch (value)
 {
 case 1:
  printf("Case 1\n");
  // Change value to the desired case
  value = 3;
  goto jump_to_case; // Jump to the label
                     // No break statement here

 case 2:
  printf("Case 2\n");
  break;

 case 3:
 // Label must be within the same function scope
 jump_to_case:
  printf("Case 3\n");
  break;

 default:
  printf("Default case\n");
 }

 return 0;
}

// Label Placement: The label jump_to_case is placed right before the code you want to execute for case 3.

// Scope:Labels are only recognized within the same function, so it should be within the switch statement and accessible at the point where goto is used.

// Behavior : goto will skip any code between the goto statement and the label it jumps to, so this approach will execute Case 1 and then immediately go to Case 3.