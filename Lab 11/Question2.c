/**
 *Programmer: Alisha Zaidi
 *Date: 21 November, 2023
 *Desc: Question 2
*/

#include <stdio.h>
#include <string.h>

#define MaxParts 300

struct EnginePart {
    char SerialNum[4];  // 2 letters + 1 digit
    int YOM;
    char material[20];
    int quantity;
};

struct AutomobileCompany {
    struct EnginePart parts[MaxParts];
    int num_parts;
};

void addEnginePart(struct AutomobileCompany *company, const char *SerialNum, int YOM, const char *material, int quantity) {
    if (company -> num_parts < MaxParts) {
        struct EnginePart *newPart = &company -> parts[company->num_parts++];
        strncpy(newPart -> SerialNum, SerialNum, sizeof(newPart ->  SerialNum));
        newPart -> YOM = YOM;
        strncpy(newPart -> material, material, sizeof(newPart -> material));
        newPart -> quantity = quantity;
    } else {
        printf("Maximum number of parts reached. Cannot add more parts.\n");
    }
}

void retrievePartsBetweenSerials(struct AutomobileCompany *company, const char *start_serial, const char *end_serial) {
    printf("Parts between %s and %s:\n", start_serial, end_serial);
    for (int i = 0; i < company -> num_parts; i++) {
        if (strcmp(company -> parts[i].SerialNum, start_serial) >= 0 &&
            strcmp(company -> parts[i].SerialNum, end_serial) <= 0) {
            printf("Serial Number: %s\n", company -> parts[i].SerialNum);
            printf("Year of Manufacture: %d\n", company -> parts[i].YOM);
            printf("Material: %s\n", company -> parts[i].material);
            printf("Quantity Manufactured: %d\n", company -> parts[i].quantity);
            printf("\n");
        }
    }
}

int main() {
    struct AutomobileCompany company = { .num_parts = 0 };

    // Adding engine parts
    addEnginePart(&company, "AA1", 2023, "Steel", 20);
    addEnginePart(&company, "BB2", 2023, "Aluminum", 30);
    addEnginePart(&company, "CC3", 2023, "Copper", 40);
    addEnginePart(&company, "DD4", 2023, "Steel", 50);

    // Retrieving information for parts between BB1 and CC6
    retrievePartsBetweenSerials(&company, "BB1", "CC6");

    return 0;
} //end main
