// wap to define a function thst accepts pointers as parameters.
// Pass variables by reference using pointers and modify their vales within the function.

#include <stdio.h>
void modifyValues(int *intPtr, char *charPtr, float *floatPtr) {
    *intPtr += 10;
    *charPtr = 'Z';
    *floatPtr *= 2.0;
}
int main() {
    int intVar = 5;
    char charVar = 'A';
    float floatVar = 4.5;

    printf("Before modification:\n");
    printf("Integer: %d\n", intVar);
    printf("Character: %c\n", charVar);
    printf("Float: %.2f\n", floatVar);

    modifyValues(&intVar, &charVar, &floatVar);

    printf("\nAfter modification:\n");
    printf("Integer: %d\n", intVar);
    printf("Character: %c\n", charVar);
    printf("Float: %.2f\n", floatVar);

    return 0;
}