#include <stdio.h>

int main() {
    char alphabets[52];
    char *ptr = alphabets;

    for (int i = 0; i < 26; i++) {
        *(ptr + i) = 'A' + i;
        *(ptr + i + 26) = 'a' + i;
    }

    printf("Alphabets:\n");
    for (int i = 0; i < 52; i++) {
        printf("%c ", *(ptr + i));
    }
    printf("\n");

    return 0;
}

