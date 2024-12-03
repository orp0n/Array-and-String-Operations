#include<stdio.h>
#include<string.h>

int main() {
    char name[20];
    int len, i, j;
    printf("Enter your nickname: ");
    gets(name);

    printf("Output is here: \n");
    len = strlen(name);
    for (i = 1; i <= len; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", name[j]);
        }
        printf("\n");
    }
    return 0;
}