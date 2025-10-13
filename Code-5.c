//WAP program to raise a floating point number to an integer power. use user defined function such as power.
#include <stdio.h>
#include <math.h>

float power(float base, int exp) {
    float result = 1.0;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    
    float base;
    printf("Enter a base (floating point number): ");
    scanf("%f", &base);
    
    int exp;
    printf("Enter an exponent (integer): ");
    scanf("%d", &exp);

    printf("%.2f raised to the power of %d is %.2f\n", base, exp, power(base, exp));
    return 0;
}
