#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter two digits: ");
    scanf("%f %f", &a , &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping: a = %.2f, b = %.2f\n", a, b);
    return 0;
}