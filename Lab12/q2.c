
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER_SIZE 1024

int equal_files(FILE* file1, FILE* file2) {
    unsigned char buffer1[MAX_BUFFER_SIZE];
    unsigned char buffer2[MAX_BUFFER_SIZE];
    size_t bytes_read1, bytes_read2;

    do {
        bytes_read1 = fread(buffer1, 1, MAX_BUFFER_SIZE, file1);
        bytes_read2 = fread(buffer2, 1, MAX_BUFFER_SIZE, file2);

        if (bytes_read1 != bytes_read2) {
            return 0;
        }

        if (memcmp(buffer1, buffer2, bytes_read1) != 0) {
            return 0;
        }
    } while (bytes_read1 == MAX_BUFFER_SIZE);

    return 1;
}

int main() {
    FILE* file1 = fopen("file1.txt", "rb");
    FILE* file2 = fopen("file2.txt", "rb");

    if (file1 == NULL || file2 == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    if (equal_files(file1, file2)) {
        printf("The two files are equal.\n");
    } else {
        printf("The two files are not equal.\n");
    }

    fclose(file1);
    fclose(file2);

    return EXIT_SUCCESS;
}