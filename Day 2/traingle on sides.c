#include <stdio.h>

int main() {
    float s1, s2, s3;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    if (s1 > 0 && s2 > 0 && s3 > 0 &&
        (s1 + s2 > s3) &&
        (s1 + s3 > s2) &&
        (s2 + s3 > s1)) {
        printf("The triangle is valid based on its sides.\n");
    } else {
        printf("The triangle is not valid based on its sides.\n");
    }

    return 0;
}

