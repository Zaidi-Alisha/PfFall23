/**
 *Programmer: Alisha Zaidi
 *Date: 31 October, 2023
 *Desc: Question 1
*/

#include <stdio.h>
void swap(int a, int b){
    int tmp = *a
//The code which was given to us previously was not working because pointers 
  were not used. First "a" was being stored into "b" but then "b" was being 
  stored as "a" again, which meant that nothing was actually happening. After 
  adding pointers, "a" pointed to the location, which means it stored the r
  value of "b" as its l value. 
    *a = *b
    *b = *a
}

int main() {
    int j= 2 , k = 5;
    printf("j=%d , k=%d \n", j,k);
    swap(j,k);
    printf("j=%d , k=%d \n", j,k);
    return 0;
}//end main
