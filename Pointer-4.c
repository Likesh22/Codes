// Wap to print the values and address of 10,20,30arrays using pointer notation.
// make use of the concepts of 'pointer to pointer', ' pointer to array'.

#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};

    int *p = arr;
    int **pp = &p;
    int (*pa)[3] = &arr;

    printf("Using pointer notation:\n");
    for (int i = 0; i < 3; i++) {
        printf("Value: %d\tAddress: %p\n", *(p + i), (p + i));
    }

    printf("\nUsing pointer to pointer:\n");
    for (int i = 0; i < 3; i++) {
        printf("Value: %d\tAddress: %p\n", *(*pp + i), (*pp + i));
    }

    printf("\nUsing pointer to array:\n");
    for (int i = 0; i < 3; i++) {
        printf("Value: %d\tAddress: %p\n", (*pa)[i], &(*pa)[i]);
    }

    return 0;
}
