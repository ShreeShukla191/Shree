#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
 printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
        printf("The triangle is valid based on its angles.\n");
    } else {
        printf("The triangle is not valid based on its angles.\n");
    }

    return 0;
}

