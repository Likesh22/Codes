// WAP to find the type and area of a triangle. using function type()

#include <stdio.h>
#include <math.h>
void type(float a, float b, float c){
    if (a==b && a==c && b==c)
        printf("The triangle is equilateral.\n");
    else if (a==b || b==c || a==c)
        printf("The triangle is isosceles.\n");
    else
        printf("The triangle is scalene.\n");
}
float area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
    float a, b, c;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);
    type(a, b, c);
    printf("Area of the triangle: %.2f\n", area(a, b, c));
    return 0;
}