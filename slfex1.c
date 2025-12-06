#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];
    char concat[202];
    char copy[101];

    printf("Enter the first string: ");
    scanf("%100s", str1);

    printf("Enter the second string: ");
    scanf("%100s", str2);

    strcpy(concat, str1);
    strcat(concat, str2);
    printf("Concatenated string: %s\n", concat);

    if (strcmp(str1, str2) == 0) {
        printf("The strings are the same.\n");
    } else {
        printf("The strings are different.\n");
    }

    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    strcpy(copy, str1);
    printf("Copy of the first string: %s\n", copy);

    return 0;
}

