#include <stdio.h>

int main() {
    float a, b, product;
    printf("Enter 2 float number: ");
    scanf("%f %f", &a, &b);
    product=a*b;
    printf("Product of these 2 number is: %.2f", product);
    return 0;
}