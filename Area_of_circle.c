#include <stdio.h>

int main() {
    #define PI 3.14
    float area, radius;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = PI*radius*radius;
    printf("Area of circle is: %.2f", area);
     return 0;
}