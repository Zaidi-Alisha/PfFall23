#include <stdio.h>

// Finding if a number is a Ramanujan-Hardy 2-way number
int isRamanujanHardy(int num) {
    for (int i = 1; i * i * i < num; i++) {
        for (int j = i; i * i * i + j * j * j < num; j++) {
            if (i * i * i + j * j * j == num) {
                printf("%d = %d^3 + %d^3\n", num, i, j);
                return 1;
            }
        }
    }
    return 0;
}

// Finding Ramanujan-Hardy numbers less than n^3
void findRamanujanHardy(int n) {
    for (int num = 1; num < n * n * n; num++) {
        isRamanujanHardy(num);
    }
}

int main() {
    int n = 1729;

    printf("Ramanujan-Hardy numbers less than %d^3:\n", n);
    findRamanujanHardy(n);

    return 0;
} //end main

