#include <stdio.h>
#include <ctype.h>

void expand(char s1[], char s2[]) {
    int i = 0, j = 0;
    while (s1[i] != '\0') {
        if (s1[i] == '-' && i > 0 && s1[i+1] != '\0' &&
            ((isdigit(s1[i-1]) && isdigit(s1[i+1])) ||
             (isalpha(s1[i-1]) && isalpha(s1[i+1])))) {
            
            char start = s1[i-1];
            char end = s1[i+1];
            
            if (start < end) {
                for (char c = start + 1; c <= end; c++) {
                    s2[j++] = c;
                }
            } else {
                for (char c = start - 1; c >= end; c--) {
                    s2[j++] = c;
                }
            }
            i += 2;
        } else {
            s2[j++] = s1[i++];
        }
    }
    s2[j] = '\0';
}

int main() {
    char s1[100], s2[500];

    fgets(s1, sizeof(s1), stdin);
    for(int k=0; s1[k]!='\0'; k++) {
        if(s1[k]=='\n') { s1[k]='\0'; break; }
    }

    expand(s1, s2);
    printf("%s\n", s2);

    return 0;
}

