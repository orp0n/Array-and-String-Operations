#include<stdio.h>

int main(){
    int n, i;
    printf("Enter elements number of your arra: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter Numbers:");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Reverse Number: ");
    for (i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}