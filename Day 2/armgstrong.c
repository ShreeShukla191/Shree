#include <stdio.h>
#include <math.h>

int main() {
    int num, oriNum, rem, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    oriNum = num;
    while (oriNum != 0) {
        oriNum /= 10;
        ++n;
    }

    
    oriNum = num;
    while (oriNum != 0) {
        rem = oriNum % 10;
        result += pow(rem, n); 
        oriNum /= 10;  
    }


    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

