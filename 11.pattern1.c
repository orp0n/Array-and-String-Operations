#include<stdio.h>

int main() {
    int i, j, n;
    printf("Enter your desire number: ");
    scanf("%d", &n);

    char matrix[n][n];
    printf("This is your pattern: \n");
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            if (i >= j){
                matrix[i][j] = '*';
                printf("%c ", matrix[i][j]);
            } else{
                matrix[i][j] = ' ';
            }
        }
        printf("\n");
    }
    return 0;
}