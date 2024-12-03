#include<stdio.h>

int main() {
    int n, i, j;
    printf("Enter your desire number: ");
    scanf("%d", &n);

    char matrix[n][n];
    printf("This is your pattern: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j < n - i) {
                matrix[i][j] = '*';
                printf("%c ", matrix[i][j]);
            } else {
                matrix[i][j] = ' ';
            }
        }
        printf("\n");
    }
    return 0;
}