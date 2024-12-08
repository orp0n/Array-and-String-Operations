#include<stdio.h>

int Fibonacci(int num) {
    int i, x = 0, y = 1, temp;

    for (i = 1; i <= num; i++) {
        printf("%d ", x);
        temp = x + y;
        x = y;
        y = temp;
    }
}

int main() {
    int n;

    printf("Enter a number to see the fibonacci serise: ");
    scanf("%d", &n); 

    printf("Fibonacci serise: ");
    Fibonacci(n);

    return 0;
}