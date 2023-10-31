/**
/**
 *Programmer: Alisha Zaidi
 *Date: 31 October, 2023
 *Desc: Lab 9b Question 1
*/

#include <stdio.h>
int factorial(int a) {
    if (a == 0) {
        return 1;
    } else {
        return a * factorial(a - 1);
    }
}

int main() {
    int num;
    printf("Enter the integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int product = factorial(num);
        printf("Factorial of %d is %d\n", num, product);
    }

    return 0;
}
