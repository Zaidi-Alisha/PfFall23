/**
 * Programmer: Alisha Zaidi
 * Desc: Question 8 lab 6
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
    
    // Input 
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements in reverse order
    printf("Array elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}//end main
