#include <stdio.h>

int main() {
    float a, b, c, d, e, avg;
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e );
    avg =(a+b+c+d+e)/5;
    printf("Avg marks are: %.2f ", avg);
    return 0;
}