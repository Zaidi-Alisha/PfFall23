/**
 * Programmer: Alisha Zaidi
 * Desc: Question 6 lab 6
 * Date: 3 October, 2023
 *
 */

#include <stdio.h>
int main() {
    int totalMatches = 21;
    int userPick;
    int computerPick;

    printf("Welcome to the Match-Stick Game!\n");
    printf("Rules: You can pick 1, 2, 3, or 4 matchsticks. The one who picks the last matchstick loses.\n");

    while (1) {
        // User's turn
        printf("Your turn. Choose 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &userPick);

        if (userPick < 1 || userPick > 4 || userPick > totalMatches) {
            printf("Invalid choice. Please pick a valid number of matchsticks.\n");
            continue;
        }

        totalMatches -= userPick;

        if (totalMatches <= 0) {
            printf("You picked the last matchstick. You lose!\n");
            break;
        }

        // Computer's turn (to force a win)
        computerPick = 5 - userPick;
        printf("Computer picks %d matchstick(s).\n", computerPick);
        totalMatches -= computerPick;

        if (totalMatches <= 0) {
            printf("Computer picked the last matchstick. You win!\n");
            break;
        }

        printf("Remaining matchsticks: %d\n", totalMatches);
    }

    return 0;
}//end main
