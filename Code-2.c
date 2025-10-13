// WAP using a user defined function to multiply two numbers. 
// Print the values for multiply(m,n)
// multiply(m+n,m-n)
// multiply(8,9)
// multiply(m, sum(m,n))
// multiply(n, m%n)
// multiply(m++, --n)

#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int m , n;
    printf("Enter two numbers:\n");
    scanf("%d %d", &m, &n);

    printf("multiply(m, n) = %d\n", multiply(m, n));
    printf("multiply(m + n, m - n) = %d\n", multiply(m + n, m - n));
    printf("multiply(8, 9) = %d\n", multiply(8, 9));
    printf("multiply(m, m + n) = %d\n", multiply(m, m + n));
    printf("multiply(n, m %% n) = %d\n", multiply(n, m % n));
    printf("multiply(m++, --n) = %d\n", multiply(m++, --n));
    printf("multiply(m, n) = %d\n", multiply(m, n));
    return 0;
}