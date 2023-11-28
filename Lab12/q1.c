
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 100

int formating_line(char str[100])
{
    char delim[2] = ",";
    int cols = 0;
    char *col = strtok(str, delim);

    
    while (col != NULL) {
        cols++;
        col[strcspn(col, "\n")] = 0;
        printf("%-14s | ", col); 
        col = strtok(NULL, delim);
    }

    printf("\n");
    return cols;
} 

void read_file(FILE *fptr)
{
    char buffer[size];
    int rows = 0, cols = 0;

    
    while (!feof(fptr)) {
        rows = formating_line(fgets(buffer, size, fptr)); 
        cols++;
    }

    printf("\n\nrows: %d, cols: %d", cols, rows);
} 

int main()
{
    FILE *fptr = fopen("table.csv", "r");
    read_file(fptr);
    fclose(fptr);

    return 0;
}