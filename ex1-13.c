#include <stdio.h>

int main(){


	int c, length = 0;

	while((c = getchar()) != EOF){

		if(c == ' ' || c == '\n' || c == '\t'){
			if(length > 0){
				for(int i = 0; i < length; i++){
					putchar('*');
				}
				putchar('\n');
				length = 0;
			}
		}
	        else{
		     length++;
			}
		
	}

	if(length > 0){
		for(int i = 0; i<length; i++){
			putchar('*');
		}
		putchar('\n');
	}

	return 0; 
}
