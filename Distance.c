#include <stdio.h>

int main() {
    float km;
    printf("Enter distance in Kilometers: ");
    scanf("%f", &km);

    printf("Distance in meter: %.2f\nDistance in centimeter: %.2f\nDistance in millimeters: %.2g", km*1000, km*100000, km*1000000);
return 0;
}