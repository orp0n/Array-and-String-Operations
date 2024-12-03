#include<stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter size of your array: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter elements of the matrix: \n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The main diagonal elements are: ");
    for (i = 1; i <= n; i++){
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    printf("\nSum of the main diagonal is %d.", sum);

    return 0;
}