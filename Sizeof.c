#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    long d;
    double e;


    printf("Enter a int:");
    scanf("%d", &a);
    printf("Size of integer %d\n", sizeof(a));

    printf("Enter a float:");
    scanf("%f", &b);
    printf("Size of float %d\n", sizeof(b));

    printf("Enter a char:");
    scanf(" %c", &c);
    printf("Size of char %d\n", sizeof(c));

    printf("Enter a long:");
    scanf("%ld", &d);
    printf("Size of long %d\n", sizeof(d));

    printf("Enter a double:");
    scanf("%lf", &e);
    printf("Size of double %d\n", sizeof(e));

    return 0;
}