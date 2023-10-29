/**
 * Programmer: Alisha Zaidi
 * Desc: Question 5 lab 6
 * Date: 3 October, 2023
 *
 */

#include <stdio.h>

int main() {
    for (int i = 0; i <= 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 0 || j == 2) {
                printf("%d ", i);
            } else {
                printf("%d", i);
            }
        }
        printf("\n");
    }

    return 0;
}//end main
