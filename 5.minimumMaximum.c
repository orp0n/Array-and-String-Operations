#include <stdio.h>

int main() {
    int n, i;
    printf("Enter element number of your array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum value: %d.\n", min);
    printf("Maximum value: %d.", max);

    return 0;
}
