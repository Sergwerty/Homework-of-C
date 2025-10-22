#include <stdio.h>

void f(int *a){
	*a *= 2;
}

int main(){
	int x;
	printf("Type the number you want to double: ");
	scanf("%d",&x);
        f(&x);
   
   	printf("The doubled number is equal to %d.\n", x);
	return 0;
}
