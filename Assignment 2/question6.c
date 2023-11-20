#include <stdio.h>

// Finding pairs with the given sum
void findPairs(int arr[], int n, int t) {
    printf("Pairs with sum %d: ", t);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                printf("(%d, %d) ", arr[i], arr[j]);
            }
        }
    }

    printf("\n");
}

int main() {
    int arr[] = {1, 8, 10, 12, 7, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t = 11;

    printf("List: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTarget: %d\n", t);

    findPairs(arr, n, t);

    return 0;
} //end main


