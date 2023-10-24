/**
 *Programmer: Alisha Zaidi
 *Date: 24 October, 2023
 *Desc: Make a function and then swap two numbers
*/

#include <stdio.h>
//Making a function
          void swapintegers(int*x,int*y){
          int temp = *x;
          *x = *y;
          *y = temp;
        }

int main () {
//Printing the values
          int num1;
          int num2;
          printf("Enter the first number: ");
          scanf("%d", &num1);
          printf("Enter the second number: ");
          scanf("%d", &num2);

//Printing the original values 
          printf("Before swapping: First number= %d\nSecond number= %d\n", num1,num2); 
      
//Calling the function
          swapintegers(&num1,&num2);

//Output
          printf("Now, the first number= %d\nSecond number= %d\n", num1,num2);
return 0;
}//end main
