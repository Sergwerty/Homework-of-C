#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Input a string: ");
    scanf("%s", str);

    char *ptr = str;
    int length = 0;

    while (*(ptr + length) != '\0') {
        length++;
    }

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", *(ptr + i));
    }
    printf("\n");

    return 0;
}

