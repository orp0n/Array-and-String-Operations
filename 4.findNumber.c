#include <stdio.h>

int main() {
    int n, num, i, found = 0;
    printf("Enter element number of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to find: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++){
        if (arr[i] == num){
            printf("The number found in index %d.", i);
            found = 1;
            break;
        }
    }
    if (! found){
        printf("The number not found in the array.");
    }
    
    
    return 0;
}
