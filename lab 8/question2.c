/**
 *Programmer: Alisha Zaidi
 *Date: 24 October, 2023
 *Desc: Make a function and then swap two numbers
*/

#include <stdio.h>
//Making addition function
          int addition(int a,int b){
          int sum = 0;
          sum = a + b;
          return sum;
        }

//Making subtraction function
          int subtraction(int a,int b){
          int sub = 0;
          sub = a - b;
          return sub;
        }

//Making multiplication function
          int multiplication(int a,int b){
          int mul = 0;
          mul = a * b;
          return mul;
        }

//Making division function
          int division(int a,int b){
          int div = 0;
          div = a / b;
          return div;
        }

int main () {
//Taking input
          int num1;
          int num2;
          char oper;
          printf("Enter the first number: ");
          scanf("%d", &num1);
          printf("Enter the second number: ");
          scanf("%d", &num2);
          printf("Enter the operator: ");
          scanf(" %c", &oper);

//Switch
         switch (oper) {
          case 'a' :
                 printf("Addition: %d", addition(num1,num2));
                 break;

          case 's' :
                 printf("Subtraction: %d", subtraction(num1,num2));
                 break;

          case 'm' :
                 printf("Multiplication: %d", multiplication(num1,num2));
                 break;

          case 'd' :          
                 printf("Division: %d", division(num1,num2));
                 break;
         }


return 0;
}//end main
