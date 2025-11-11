#include <stdio.h>

int main() {
    int l, b , perimeter;
    printf("Enter length and width of rectangle: " );
    scanf("%d %d",&l ,&b);
    perimeter = 2*(l+b);
    printf("Perimeter of rectangle is: %d", perimeter);
    return 0;
}