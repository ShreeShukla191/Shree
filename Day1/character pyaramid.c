#include <stdio.h>

int main() {
    int rows, i, j, k;
    char ch = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
    
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        ch = 'A'; 
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}

