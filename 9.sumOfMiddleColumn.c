#include<stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int matrix[n][n];
    int midC = n / 2;
    printf("Enter elements of the matrix: \n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("The elements of secondary diagonal are: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", matrix[i][midC + 1]);
        sum += matrix[i][midC + 1];
    }
    printf("\nSum of the secondary diagonal is %d", sum);

    return 0;
}