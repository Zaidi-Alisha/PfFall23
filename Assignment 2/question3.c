#include <stdio.h>
#define Days 5
#define Slots 2

// Best day and time slot 
void findBestOption(int flights[Days][Slots], int preference) {
    int bestDay = -1;
    int bestTimeSlot = -1;
    int maxAvailability = -1;

    for (int i = 0; i < Days; i++) {
        for (int j = 0; j < Slots; j++) {
            if (flights[i][j] == 1) {
                if (preference == 1 && j == 0) { // Morning 
                
                    if (maxAvailability < 1) {
                        maxAvailability = 1;
                        bestDay = i;
                        bestTimeSlot = j;
                    }
                } else if (preference == 2 && j == 1) { // Evening 
                    if (maxAvailability < 1) {
                        maxAvailability = 1;
                        bestDay = i;
                        bestTimeSlot = j;
                    }
                } else if (preference == 0) { // null
                    if (maxAvailability < 1) {
                        maxAvailability = 1;
                        bestDay = i;
                        bestTimeSlot = j;
                    }
                }
            }
        }
    }

    if (bestDay != -1 && bestTimeSlot != -1) {
        printf("Best option: Day %d, ", bestDay + 1);
        if (bestTimeSlot == 0) {
            printf("Morning, Price $%d\n", flights[bestDay][bestTimeSlot]);
        } else {
            printf("Evening, Price $%d\n", flights[bestDay][bestTimeSlot]);
        }
    } else {
        printf("No available flights based on the given preference.\n");
    }
}

// Function to check flight availability for a specific day
void checkAvailability(int flights[Days][Slots], int day) {
    if (day >= 1 && day <= Days) {
        printf("Flights on Day %d:\n", day);
        for (int j = 0; j < Slots; j++) {
            if (flights[day - 1][j] == 1) {
                printf("Time Slot %s, Price $%d\n", (j == 0) ? "Morning" : "Evening", flights[day - 1][j]);
            } else {
                printf("Time Slot %s is full.\n", (j == 0) ? "Morning" : "Evening");
            }
        }
    } else {
        printf("Invalid day. Please enter a day between 1 and %d.\n", Days);
    }
}

int main() {
    // Given 2d array
    int flights[Days][Slots] = {
        {1, 300, 0, 0},
        {1, 320, 1, 310},
        {0, 0, 1, 280},
        {1, 380, 0, 0},
        {1, 375, 1, 400}
    };

    // Part a
    printf("Part a:\n");
    findBestOption(flights, 0);

    // Part b
    printf("\nPart b:\n");
    findBestOption(flights, 1);

    // Part c
    printf("\nPart c:\n");
    findBestOption(flights, 2);

    // Part d
    printf("\nPart d\n");
    checkAvailability(flights, 3);

    return 0;
} //end main
