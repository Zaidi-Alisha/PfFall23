/**
 * Programmer: Alisha Zaidi
 * Desc: Question 4 lab 6
 * Date: 3 October, 2023
 *
 */

#include <stdio.h>

void printNumberInEnglish(int x) {
    switch (x) {
        case 0: 
          printf("Zero"); 
          break;
        case 1: 
          printf("One"); 
          break;
        case 2: 
          printf("Two"); 
          break;
        case 3: 
          printf("Three"); 
          break;
        case 4: 
          printf("Four"); 
          break;
        case 5: 
          printf("Five"); 
          break;
        case 6: 
          printf("Six"); 
          break;
        case 7: 
          printf("Seven"); 
          break;
        case 8: 
          printf("Eight"); 
          break;
        case 9: 
          printf("Nine"); 
          break;
        default: 
          break;
    }
}

int main() {
    int a, b;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    if (a <= b) {
        for (int i = a; i <= b; i++) {
            if (i <= 9) {
                printf("%d = ", i);
                printNumberInEnglish(i);
                printf("\n");
            } else {
                printf("%d is %s\n", i, (i % 2 == 0) ? "even" : "odd");
            }
        }
    } else {
        printf("The starting value 'a' should be less than or equal to the ending value 'b'.\n");
    }
    
    return 0;
}
