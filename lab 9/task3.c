/**
/**
 *Programmer: Alisha Zaidi
 *Date: 31 October, 2023
 *Desc: Question 3
*/

#include <stdio.h>

int main (){
  
    int N;
    int IntArr[N];
    int i; //so that i works outside for loop as well
    char CharArr[N];
    long long int LongIntArr[N];
    int *ptr; //reading addresses

//Input for the number of elements in the array 
    printf("Enter the size of the array: ");
    scanf("%d", &N);
  printf("The integer array: \n");
    for (int i=0; i < N; i++){
     printf("Enter the number of elements in the array: ", i + 1);
     scanf("%d", &IntArr[i]);
     }
  int *ptr = IntArr[N];
       for (int i=0; i < N; i++){
       printf("%d",*ptr);
       ptr ++;
       }
 
  printf("The character array: \n");
 for (int i=0; i < N; i++){
     printf("Enter the number of elements in the array: ", i + 1);
     scanf(" %c", &CharArr[i]);
     }
     
 printf("The long long integer array: \n");
    for (int i=0; i < N; i++){
     printf("Enter the number of elements in the array: ", i + 1);
     scanf("%lld", &LongIntArr[i]);
     }

}//end main
