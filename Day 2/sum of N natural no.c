#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    if (n > 0) {
    
        sum = (n * (n + 1)) / 2; 
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}

