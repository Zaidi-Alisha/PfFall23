/**
 * Programmer: Alisha Zaidi
 * Desc: Question 3 lab 7
 * Date: 10 October, 2023
 *
 */

#include <stdio.h>
int main() {
           int arrNum[10];
           int sum = 0;
          
           printf("Enter how many numbers you want to enter: ");
          for (int i=0; i < 10; i++) {  
           scanf("%d", &arrNum[i]);
          }
           
           for (int i=0; i < 10; i++) {
            sum = sum + arrNum[i];
           }

           printf("The sum of the elements in the array is: %d\n", sum);
          
          
}//end main
