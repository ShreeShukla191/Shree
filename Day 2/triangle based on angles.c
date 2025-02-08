#include <stdio.h>

int main() {
    int a1, a2, a3;
 printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &a1, &a2, &a3);
    if (a1 > 0 && a2 > 0 && a3 > 0 && (a1 + a2 + a3 == 180)) {
        printf("The triangle is valid based on its angles.\n");
    } else {
        printf("The triangle is not valid based on its angles.\n");
    }

    return 0;
}

