#include <stdio.h>

#define MAX 1000

void reverse(char s[],int len){
	int i,j;
        char temp;
	for(i=0,j=len-1;i<j;i++,j--){
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;}
}


int main(){
	int c,length = 0;
	char line[MAX];

	while((c = getchar()) != EOF && c != '\n'){
		if(length < MAX - 1){
			line[length] = c;
			length++;}
	}
        
	reverse(line, length);

	for(int g = 0;g<length;g++){
		putchar(line[g]);
	}
	putchar('\n');
        return 0;
}




