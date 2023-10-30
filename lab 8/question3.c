/**
 *Programmer: Alisha Zaidi
 *Date: 24 October, 2023
 *Desc:  Creating a C program that reads a text input from the user and searches for a specific characte
*/

#include <stdio.h>
#include <string.h>

int main() {
  char text[1000], character;
  int count = 0;

//Taking input
  printf("Enter the text: ");
  fgets(text, sizeof(text), stdin);

  printf("Enter the character to search for: ");
  scanf("%c", &character);

// Use the strchr function to find the first occurrence of the character in the text.
  char *ptr = strchr(text, character);

// Loop through the text, starting from the first occurrence of the character, and increment the count variable for each occurrence.
  while (ptr != NULL) {
    count++;
    ptr = strchr(ptr + 1, character);
  }

// Display the total count of occurrences of the character in the input text.
  printf("'%c' appeared in the text  %d times.\n", character, count);

  return 0;
}//end main
