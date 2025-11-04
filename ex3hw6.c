#include <stdio.h>

void to_upper(char *s){
    int i = 0;
    while(s[i]!= '\0'){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i] - ('a'-'A');
        }
        i++;
    }

}

void reverse(char *s){
    char temp;
    for(int i = 0; i<sizeof(s)/2;i++){
        temp = s[i];
        s[i] = s[sizeof(s)-i];
        s[sizeof(s)-i] = temp;
    }
}

void process(char *str, void (*func)(char *)){
    func(str);
}

int main(){
    char s[50] = "Niggers are good.";
    
    process(s,to_upper);
    printf("%s\n",s);
}