#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,sum,area;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f",&a,&b,&c);

    sum=(a+b+c)/2;
    area=sqrt(sum*(sum-a)*(sum-b)*(sum-c));
    
    printf("Area of the triangle: %.2f\n",area);
    return 0;
}