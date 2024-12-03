#include<stdio.h>
#include<string.h>

int main() {
    char str1[100], str2[100], concat[100], copy[100];
    int i, len1, len2;
    printf("Enter your 1st string: ");
    gets(str1);
    printf("Enter your 2nd string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("\nThis is the for length of strings.\n");
    printf("1st string length is %d.\n", len1);
    printf("2nd string length is %d.\n", len2);

    printf("\nThis is for show lerger string.\n");
    if (len1 > len2) {
        printf("The larger string: %s.\n", str1);
    } else if (len2 > len1) {
        printf("The larger string: %s.\n", str2);
    } else {
        printf("Both strings length are equal.\n");
    }

    printf("\nThis is for concatenate the strings.\n");
    strcpy(concat, str1);
    strcat(concat, str2);
    printf("Concatenated string: %s.\n", concat);

    printf("\nThis is for copy the strings.\n");
    strcpy(copy, concat);
    printf("Copied string: %s.\n", copy);

    printf("\nThis is for showing lexicographically larger strings.\n");
    if (strcmp(str1, str2) > 0) {
        printf("Lexicographically lerger string: %s.\n", str1);
    } else if (strcmp(str1, str2) < 0) {
        printf("Lexicographically lerger string: %s.\n", str2);
    } else {
        printf("Both strings are lexicographically equal.\n");
    }

    printf("\nThis is for ividing a string into equal part.\n");
    if (len1 % 2 == 0) {
        printf("First half: ");
        for (i = 0; i < len1 / 2; i++) {
            printf("%c", str1[i]);
        }
        printf("\nSecond half: ");
        for (i = len1 / 2; i < len1; i++) {
            printf("%c", str1[i]);
        }
    } else {
        printf("The string can't be divided into equal part.\n");
    }

    printf("\nThis if for word count.\n");
    int wordCount = 1;
    for (i = 0; i < len1; i++) {
        if (str1[i] == ' ') {
            wordCount++;
        }
    }
    printf("Number of word: %d.\n", wordCount);

    printf("\nThis is for counting Digits, consonants, vowels, and special characters.\n");
    int d = 0, c = 0, v = 0, s = 0;
    for (i = 0; i < len1; i++) {
        char ch = str1[i];
        if (ch >= '0' && ch <= '9') {
            d++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U' ) {
                v++;
            } else {
                c++;
            }
        } else {
            s++;
        }
    }
    printf("Digits: %d, Consonant: %d, Vowels: %d, Special Characters: %d.", d, c, v, s);

    return 0;
}