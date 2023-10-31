/**
 *Programmer: Alisha Zaidi
 *Date: 31 October, 2023
 *Desc: Question 2
*/

#include <stdio.h>
void reverse(int *arr, int size){
// Display the elements in reverse order
    printf("Array elements in reverse order:\n");
    for (int i = 10 - 1; i >= 0; i-- ){
      printf("%d ", arr[i]);
     }
}

int main (){
//Input for the number of elements in the array   
    int arr[10];
    int i; //so that i works outside for loop as well
    int size = 10;
    printf("Enter the size of the array: ", size);
    scanf("%d", &size);
    for (int i=0; i < 10; i++){
    printf("Enter the number of elements in the array: ", i + 1);
    scanf("%d", &arr[i]);
}
    reverse(arr,size);

}//end main
 

