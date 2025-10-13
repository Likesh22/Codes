// WAP to select a candidate based on height and age. 
// Define a user defined function and set conditions where age is <25 and height > 5 foot.

#include <stdio.h>

int select_candidate(int age, float height) {
    if (age < 25 && height > 5.0) {
        return 1;
    }
    return 0;
}

int main() {
    int age;
    float height;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height (in feet): ");
    scanf("%f", &height);

    if (select_candidate(age, height)) {
        printf("Candidate is selected.\n");
    } 
    else {
        printf("Candidate is not selected.\n");
    }

    return 0;
}