/**
 * Programmer: Alisha Zaidi
 * Desc: Question 1 lab 6
 * Date: 3 October, 2023
 *
 */

#include <stdio.h>
int main() {
            int n; //taking input
            int sum = 0;
            printf("Enter a number: ");
            scanf("%d", &n);

            for (int a = 0; a <= n/2; a++) {
                if (n % a == 0) {
                   sum = sum + a;
                   }
                  }
                if (sum ==n)
                   printf("%d is a perfect number" ,n);
                else
                   printf("%d is not a perfect number" ,n);
} //end main
