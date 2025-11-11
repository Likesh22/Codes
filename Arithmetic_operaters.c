#include <stdio.h>
#include <math.h>

int main() {
    float a,b;
    printf("Enter 1st number:\n");
    scanf("%f",&a);
    printf("Enter 2nd number:\n");
    scanf("%f",&b);

    printf("Addition: %.2f\n", a+b);
    printf("Subtraction: %.2f\n", a-b);
    printf("Multiplication: %.2f\n", a*b);
    printf("Division: %.2f\n", a/b);
    printf("Modulus: %d\n", (int)a % (int)b);
    return 0;
}