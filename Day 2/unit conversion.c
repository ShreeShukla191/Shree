#include <stdio.h>

int main() {
    int choice;
    float input, result;

    printf("Choose a conversion option:\n");
    printf("1. Centimeters to Meters\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Kilograms to Grams\n");
    printf("4. Grams to Kilograms\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the value in centimeters: ");
            scanf("%f", &input);
            result = input / 100.0;  // 1
            printf("%.2f cm = %.2f meters\n", input, result);
            break;

        case 2:
            printf("Enter the value in meters: ");
            scanf("%f", &input);
            result = input * 100.0;  
            printf("%.2f meters = %.2f centimeters\n", input, result);
            break;

        case 3:
            printf("Enter the value in kilograms: ");
            scanf("%f", &input);
            result = input * 1000.0;  
            printf("%.2f kg = %.2f grams\n", input, result);
            break;

        case 4:
            printf("Enter the value in grams: ");
            scanf("%f", &input);
            result = input / 1000.0;
            printf("%.2f grams = %.2f kilograms\n", input, result);
            break;

        case 5:
            printf("Exiting the program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please choose a valid option (1-5).\n");
    }

    return 0;
}

