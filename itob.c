#include <stdio.h>

void itob(int n, char s[], int b) {
    int i = 0;
    int isNegative = 0;
    char temp[50];

    if (n == 0) {
        s[0] = '0';
        s[1] = '\0';
        return;
    }

    if (n < 0 && b == 10) {
        isNegative = 1;
        n = -n;
    }

    while (n > 0) {
        int rem = n % b;
        if (rem < 10) {
            temp[i] = rem + '0';
        } else {
            temp[i] = (rem - 10) + 'A';
        }
        n = n / b;
        i++;
    }

    if (isNegative) {
        temp[i] = '-';
        i++;
    }

    int j = 0;
    while (i > 0) {
        s[j] = temp[i - 1];
        j++;
        i--;
    }
    s[j] = '\0';
}

int main() {
    int number, base;
    char str[50];

    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Enter base (2-16): ");
    scanf("%d", &base);

    itob(number, str, base);
    printf("Number in base %d: %s\n", base, str);

    return 0;
}

