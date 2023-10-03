/**
 * Programmer: Alisha Zaidi
 * Desc: Question 2 lab 6
 * Date: 3 October, 2023
 *
 */

#include <stdio.h>
int main() {
            int previous = 0; //first number
            int current = 1; //second number
            int fib = 0; // previous + current
            sum = 0;
           printf("Fibonacci sequence till 10000");
            for (int count = 0; fib <= 10000; count++) {
            printf("%d ", fib);
            fib = previous + current; 
            previous = current
            current = fib;
        if ( fib % 3 == 0 || fib % 5 == 0 || fib % 7 == 0 ) {
            sum += fib;
            }
}
            printf("\n%d", sum);   
       
              
} //end main
