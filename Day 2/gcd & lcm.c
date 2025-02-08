#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b, int gcd_value) {
    return (a * b) / gcd_value;
}

int main() {
    int num1, num2, gcd_value, lcm_value;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    gcd_value = gcd(num1, num2);

    lcm_value = lcm(num1, num2, gcd_value);
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd_value);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm_value);

    return 0;
}

