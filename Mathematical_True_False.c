#include <stdio.h>

int main() {

    int num=24;
    printf("Divisibility Test: %d\n", num%3==0 && num%4==0); 
    printf("\n");

    int a=15 ,b=25;
    printf("Sum verification: %d\n", a+b!=45);
    printf("\n");

    int a1=3 ,a2=4, a3=5 ;
    printf("Right Angle: %d \n", a1*a1 + a2*a2 == a3*a3);
    printf("\n");

    int year =2023;
    printf("Leap year: %d\n", year%4!=0 && year%100==0 || year%400==0);
    printf("\n");

    int temp=35;
    printf("Temperature range: %d\n", temp<20 || temp>30);
    printf("\n");
    return 0;
}