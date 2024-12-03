#include<stdio.h>

int main(){
    int n, i, evenSum = 0, oddSum = 0;
    printf("Enter element number of your array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter numbers: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            evenSum += arr[i];
        } else{
            oddSum += arr[i];
        }
        
    }
    printf("Sum of Even numbers: %d\n", evenSum);
    printf("Sum of Odd numbers: %d", oddSum);

    return 0;
}