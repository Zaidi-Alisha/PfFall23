/**
 *Programmer: Alisha Zaidi
 *Date: 24 October, 2023
 *Desc:  Creating a function called decideCarUsage that helps users decide whether they should use their car on a particular day of the week
*/

#include <stdio.h>

// Making the function
int decideCarUsage(int CarNumber, int Day) {
// Checking if the car number is even or odd.
  int isEvenCar = (CarNumber % 2) == 0;

// Checking if the day of the week is even or odd
  int isEvenDay = (Day % 2) == 0;

// Return 1 if the car should be used and 0 if it should not
  return isEvenCar == isEvenDay;
}

int main() {
  int CarNumber;
  int Day;

// Taking input from the user
  printf("Enter your car number: ");
  scanf("%d", &CarNumber);

  printf("Enter the day of the week (1 to 7): ");
  scanf("%d", &Day);

// Call the decideCarUsage function 
  int shouldUseCar = decideCarUsage(CarNumber, Day);

  // Display the result to the user.
  if (shouldUseCar) {
    printf("You should use your car today.\n");
  } else {
    printf("You should not use your car today.\n");
  }

  return 0;
}// end main

