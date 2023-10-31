/**
/**
 *Programmer: Alisha Zaidi
 *Date: 31 October, 2023
 *Desc: Lab 9b Question 2
*/

#include <stdio.h>

int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    } else if (b > 0) {
        return a + multiply(a, b - 1);
    } else {
        return -multiply(a, -b);
    }
}

int main() {
    int num1;
    int num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int product = multiply(num1, num2);
    printf("On multiplying %d and %d we get %d\n", num1, num2, product);

    return 0;
}//end main