#include <stdio.h>

int binsearch(int x, int v[], int n){

	int min,mid,max;
	min = 0;
	max = n - 1;

	while(min < max){
		mid = (min + max) / 2;

		if(x < v[mid]){
			max = mid;
		}
		else{
			min = mid + 1;
		}

	if(x == v[mid]){
		return mid;
	}
	else{
		return -1;

	}
}
}

int main(){
      
	int x = 5;
	int v[10] = {1,2,3,4,5,6,7,8,9,10};

	if(binsearch(x,v,10) == -1){
		printf("Not found.\n");
	}
	else{
		printf("Found\n");
	}

	return 0;
}



