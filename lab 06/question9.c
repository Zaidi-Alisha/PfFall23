/**
 * Programmer: Alisha Zaidi
 * Desc: Question 9 lab 6
 * Date: 3 October, 2023
 *
 */

#include <stdio.h>
int main() {
    int n;
    
    //input for the number of elements in the array
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

    int min = arr[0];
    int max = arr[0];

    // Finding the min and max numbers
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Display the min and max numbers
    printf("Minimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);

    return 0;
}//end main
