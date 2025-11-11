#include <stdio.h>

int main() {
    float a , b;
    printf("Enter two numbers:\n");
    scanf("%f %f",&a,&b);

    if(a > b) {
        printf("Larger number is: %.2f\n", a);
    } else {
        printf("Larger number is: %.2f\n", b);
    }

    return 0;
}