// Wap declare different type of pointers(int, char, float) and initialize them with the address of variables.
// Print the values for both the pointer and variable they point to

#include <stdio.h>
int main() {
    int Var1 = 42;
    char Var2 = 'A';
    float Var3 = 3.14;

    int *intPtr = &Var1;
    char *charPtr = &Var2;
    float *floatPtr = &Var3;

    printf("Integer variable value: %d\n", Var1);
    printf("Integer pointer value: %p, points to value: %d\n", (void*)intPtr, *intPtr);

    printf("Character variable value: %c\n", Var2);
    printf("Character pointer value: %p, points to value: %c\n", (void*)charPtr, *charPtr);

    printf("Float variable value: %.2f\n", Var3);
    printf("Float pointer value: %p, points to value: %.2f\n", (void*)floatPtr, *floatPtr);

    return 0;
}