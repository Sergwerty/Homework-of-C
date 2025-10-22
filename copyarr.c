#include <stdio.h>

void copy(int *a,int *b,int sizea){
	for(int i = 0;i<sizea;++i){
		*(b + i) = *(a + i);
	}
}

int main(){
	int arra[10] = {1,2,3,4,5,6,7,8,9,10};
	int arrb[sizeof(arra)/sizeof(arra[0])];

	copy(arra,arrb,10);

	for(int i = 0; i<(sizeof(arrb)/sizeof(arrb[0]));i++){
	      printf("%d\n", *(arrb + i));
	}
	return 0;
}
