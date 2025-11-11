#include <stdio.h>

int main() {
    float a, b;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &a);
    b = (a*9/5) +32;
    printf("Temperature in fahrenheit is: %.2f", b);
    return 0;
}