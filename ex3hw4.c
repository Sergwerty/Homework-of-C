#include <stdio.h>

void f(char* s){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] != ' '){
            printf("%c",s[i]);
        }
        else{
            printf("\n");
        }
        i++;
    }    
}

int main(){
    char s[50] = "dad dadagg hh";
    f(s);
   
}