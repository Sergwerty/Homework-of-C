#include <stdio.h>

#define MAX 1000
#define LIMIT 80

int main(){

	int c,length = 0;
	char line[MAX];

	while((c = getchar()) != EOF){
		line[length] = c;
		length++;

		if(c == '\n'){
			line[length] = '\0';
			if(length > LIMIT){
				printf("%s",line);
			}
		        length = 0;
		}
	}
  
	if(length > 0){
		line[length] = '\0';
		if(length > LIMIT){
		     printf("%s",line);
	        }
                length = 0;
        }		

   return 0;
}	
              
