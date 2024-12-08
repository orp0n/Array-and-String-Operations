#include<stdio.h>

int evenNum(int start, int end) {
    int i, sum = 0;
    for (i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int a, z, mainSum = 0;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter last number: ");
    scanf("%d", &z);

    mainSum = evenNum(a, z);
    printf("The sum of even number from %d to %d is: %d", a, z, mainSum);

    return 0;
}