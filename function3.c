#include<stdio.h>

int Factorial(int num) {
    int i, fact = 1;
    for (i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, mainFactorial;
    printf("Enter a number: ");
    scanf("%d", &n);

    mainFactorial = Factorial(n);
    printf("The factorial number of %d is: %d", n, mainFactorial);

    return 0;
}