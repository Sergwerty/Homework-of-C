#include <stdio.h>

void escape(char s[], char t[]) {
    int i = 0, j = 0;
    while (t[i] != '\0') {
        switch (t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            default:
                s[j++] = t[i];
        }
        i++;
    }
    s[j] = '\0';
}

void unescape(char s[], char t[]) {
    int i = 0, j = 0;
    while (t[i] != '\0') {
        if (t[i] == '\\') {
            i++;
            switch (t[i]) {
                case 'n': s[j++] = '\n'; break;
                case 't': s[j++] = '\t'; break;
                default: s[j++] = t[i]; break;
            }
        } else {
            s[j++] = t[i];
        }
        i++;
    }
    s[j] = '\0';
}

int main() {
    char input[100], escaped[200], unescaped[100];

    printf("Enter a string (with tabs and newlines using Enter and Tab keys):\n");
    fgets(input, sizeof(input), stdin);

    escape(escaped, input);
    printf("Escaped string:\n%s\n", escaped);

    unescape(unescaped, escaped);
    printf("Unescaped string:\n%s\n", unescaped);

    return 0;
}

