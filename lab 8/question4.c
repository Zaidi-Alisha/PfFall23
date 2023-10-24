/**
 *Programmer: Alisha Zaidi
 *Date: 24 October, 2023
 *Desc: Checking the password
*/

#include <stdio.h>

int main() {
  // Enter a password.
  char password[100];
  printf("Enter the password: ");
  scanf("%s", password);

  // Checking the password if it is 8 characters long
  if (strlen(password) < 8) {
    printf("Password must be at least 8 characters long.\n");
    return 1;
  }

  // If the password meets the length requirement, compare it to a stored password 
  char storedPassword[] = "Secure123";
  if (strcmp(password, storedPassword) == 0) {
    printf("Login successful. Welcome!\n");
  } else {
    printf("Login failed. Incorrect password.\n");
  }

  return 0;
}// end main
