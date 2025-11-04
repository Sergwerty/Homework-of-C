#include <stdio.h>

void norm(char* s,char* n){
    int i = 0;
    int count = 0;
    while(s[i] != '\0'){
        if((*(s+i) >= 'A' && *(s+i) <= 'Z') || (*(s+i)>= 'a' && *(s+i) <= 'z')){
            *(n+count) = *(s+i);
            count++;
        }
        i++;
    }
    *(n+count) = '\0';
}

int main(){
    char s[50] = "h@#!$ello";
    char n[50];
    norm(s,n);

    printf("%s",n);
}