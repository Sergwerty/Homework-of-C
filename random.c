#include <stdio.h>
#include <stdlib.h>

int main(){

        int guess;
	int min = 0;
	int max = 100;
	int RandomNum = (rand() % (max - min + 1)) + min;
	
	printf("! ! ! WELCOME TO THE GAME ! ! !\n");
        start:
	printf("Guess a number between 0-100 ");
        
	scanf("%d" , &guess);
	if(guess < 0 || guess > 100){
		printf("You need to write a number between 0-100!\n");
		goto start;
	}
	else if(guess == RandomNum){
		printf("You have Won!\n");
	}
	else{
		printf("You have LOST!\n");
		goto start;
	}

	return 0;
}
