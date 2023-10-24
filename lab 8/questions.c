/**
 *Programmer: Alisha Zaidi
 *Date: 24 October, 2023
 *Desc: Checking the password
*/

#include <stdio.h>

void processArray(int arr[], int size, int *sum, int *max, int *min) {
  *sum = 0;
  *max = arr[0];
  *min = arr[0];

  for (int i = 0; i < size; i++) {
    *sum += arr[i];
    if (arr[i] > *max) {
      *max = arr[i];
    }
    if (arr[i] < *min) {
      *min = arr[i];
    }
  }
}

int main() {
  int arr[] = {4, 8, 1, 15, 6};
  int size = sizeof(arr) / sizeof(arr[0]);

  int sum, max, min;

  processArray(arr, size, &sum, &max, &min);

  printf("Array Sum: %d\n", sum);
  printf("Array Max: %d\n", max);
  printf("Array Min: %d\n", min);

  return 0;
}


