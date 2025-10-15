#include <stdio.h>

void escape(char s[], char t[]){
	int i = 0, j = 0;
	while(t[i] != '\0'){
		switch (t[i]) {
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			deafult:
				s[j++] = t[i];
                                break;
		}
		i++;
	}
	s[j] = '\0';
}

int main(){

	char s[] = "Hello World\n aasa          ";
	char t[100];

	escape(t,s);
        printf("%s" , s);
        return 0;
}	
