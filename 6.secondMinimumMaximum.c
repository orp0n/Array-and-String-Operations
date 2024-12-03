#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter element number of your array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    if (n < 2){
        printf("Array is too small to fine second minimum and maximum.");
        return 0;
    }
    for (i = 1; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Second minimum value: %d.\n", arr[1]);
    printf("Second maximum value: %d.", arr[n -2]);

    return 0;
}