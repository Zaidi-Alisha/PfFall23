#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Function to find the largest element
void find_max(int n, int arr[], int res[], int pos) {
    int max = arr[0];
    for (int i = 1; i < n * n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    res[pos] = max;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <hello.txt>\n", argv[0]);
        return 1;
    }//ending if

    //Reading the data from the file question1.txt
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Could not open file %s\n", argv[1]);
        return 1;
    }//end if 

    int n;
    fscanf(file, "%d", &n);
    n = (int)pow(2, n);

    int arr[n * n];
    for (int i = 0; i < n * n; i++) {
        fscanf(file, "%d", &arr[i]);
    }

    int res[n * n / 4];

    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < n; j += 2) {
            int sub_matrix[4];
            sub_matrix[0] = arr[i * n + j];
            sub_matrix[1] = arr[i * n + j + 1];
            sub_matrix[2] = arr[(i + 1) * n + j];
            sub_matrix[3] = arr[(i + 1) * n + j + 1];
            find_max(2, sub_matrix, res, i / 2 * n / 2 + j / 2);
        }
    }

    for (int i = 0; i < n * n / 4; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    fclose(file);
    return 0;
    
//reading file
FILE *fp;
char ch;
fp = fopen("question1.txt", "w");
printf("Enter data");
while((ch = getchar())!= EOF) {
  putc(ch,fp);
}
fclose(fp);
fp = fopen("question1.txt", "r");

while( (ch = getc (fp))!= EOF) {
  printf("%c",ch);
  
fclose(fp);
}
}//end main 


