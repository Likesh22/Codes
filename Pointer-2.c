// Perform pointer arithmatic on pointer (increment/decrement) of different data types and observe the changes in memory addresses and the effect on data occurs.

#include <stdio.h>
int main() {
    int intArray[3] = {10, 20, 30};
    char charArray[3] = {'X', 'Y', 'Z'};
    float floatArray[3] = {1.1f, 2.2f, 3.3f};

    int *intPtr = intArray;
    char *charPtr = charArray;
    float *floatPtr = floatArray;

    printf("Integer Pointer Arithmetic:\n");
    for (int i = 0; i < 3; i++) {
        printf("Address: %p, Value: %d\n", (void*)intPtr, *intPtr);
        intPtr++;
    }

    printf("\nCharacter Pointer Arithmetic:\n");
    for (int i = 0; i < 3; i++) {
        printf("Address: %p, Value: %c\n", (void*)charPtr, *charPtr);
        charPtr++;
    }

    printf("\nFloat Pointer Arithmetic:\n");
    for (int i = 0; i < 3; i++) {
        printf("Address: %p, Value: %.2f\n", (void*)floatPtr, *floatPtr);
        floatPtr++;
    }

    return 0;
}