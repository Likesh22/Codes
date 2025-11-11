#include <stdio.h>
int main() {

    int score = 85;
    printf("Distinction: %d \n", score >= 80);
    printf("\n");

    int speed = 75;
    printf("Car speed limit is 60 km/h\n");
    printf("%d \n", speed>=60);
    printf("\n");

    int money = 10;
    printf("Movie ticket costs $12\n"); 
    printf("%d\n", money>=12);
    printf("\n");

    int age = 17;
    printf("Minimum age for voting is 18\n");
    printf("%d\n", age>=18);
    printf("\n");

    int password_length = 12;
    printf("Password must be at least 8 characters long\n");
    printf("%d\n", password_length>=8);
    printf("\n");

return 0;
}