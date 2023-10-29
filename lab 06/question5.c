/**
 * Programmer: Alisha Zaidi
 * Desc: Question 5 lab 6
 * Date: 3 October, 2023
 *
 */

#include <stdio.h>
int main() {
    int count = 0;

    for (int i = 0; i <= 6; i++) {
        for (int j = 0; j < 4 - i % 2; j++) {
            printf("%d ", i);
            count++;
        }

        if (count % 4 == 0) {
            printf("\n");
        }
    }

    return 0;
}//end main

