/**
 * Programmer: Alisha Zaidi
 * Desc: Question 1 lab 7
 * Date: 10 October, 2023
 *
 */

#include <stdio.h>
int main() {
           int x;
           int y;
           int q=0;
           printf("Enter the first number: ");
           scanf("%d",&x);
           printf("Enter the second number: ");
           scanf("%d",&y);
             while (x >= y) {
             x = x - y;
             q = q + 1;
             }
          printf("The remainder is %d\n",x);
          printf("The quotient is %d\n",q);
}//end main
