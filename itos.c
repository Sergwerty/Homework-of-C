#include <stdio.h>

void to_str(int n, char s[]) {
    int i = 0, sign = n;

    if (n < 0) n = -n;

    do {
        s[i++] = n % 10 + '0';
        n /= 10;
    } while (n > 0);

    if (sign < 0) s[i++] = '-';

    s[i] = '\0';

    for (int j = 0; j < i/2; j++) {
        char temp = s[j];
        s[j] = s[i-1-j];
        s[i-1-j] = temp;
    }
}

int main() {
    int num;
    char str[20];

    printf("Enter an integer: ");
    scanf("%d", &num);

    to_str(num, str);

    printf("String: %s\n", str);

    return 0;
}

