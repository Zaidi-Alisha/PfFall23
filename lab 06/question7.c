/**
 * Programmer: Alisha Zaidi
 * Desc: Question 7 lab 6
 * Date: 3 October, 2023
 *
 */

#include <stdio.h>
int main() {
    int n;
    
    // input for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The array size must be greater than 0.\n");
        return 1; // Exit with an error code
    }

    int arr[n];
    
    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    
    // Calculate the sum of elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("Sum of the elements: %d\n", sum);

    return 0;
}// end main