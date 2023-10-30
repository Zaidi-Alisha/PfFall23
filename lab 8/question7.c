/**
 *Programmer: Alisha Zaidi
 *Date: 24 October, 2023
 *Desc: Developing a C program for a coffee shop that offers discounts based on customer loyalty and purchase history.
*/

#include <stdio.h>

// Making the function
float calculateDiscount(float purchaseAmount, int visitCount) {
  // Determine the discount based on the following criteria:
  if (visitCount > 10 && purchaseAmount >= 50) {
    // 15% discount
    return 0.15 * purchaseAmount;
  } 
  else if (visitCount > 5 && purchaseAmount >= 30) {
    // 10% discount
    return 0.10 * purchaseAmount; 
  } 
  // No discount
  else {
    return 0.0; // No discount
  }
}

int main() {
// Taking inputs
  float purchaseAmount;
  int visitCount;

  printf("Enter your total purchase amount: ");
  scanf("%f", &purchaseAmount);

  printf("How many times did you visit the shop in the past month: ");
  scanf("%d", &visitCount);

// Calling the function
  float discount = calculateDiscount(purchaseAmount, visitCount);

// Calculate the new price
  float newPrice = purchaseAmount - discount;

// Displaying outputs
  printf("Your discount is $%.2f.\n", discount);
  printf("Your new price is $%.2f.\n", newPrice);

  return 0;
}


