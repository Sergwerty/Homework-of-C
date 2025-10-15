#include <stdio.h>


int binsearch(int x,int v[],int n){
	int min,max,mid;
	min = 0;
	max = n-1;
	while(min <= max){
		mid = (min + max) / 2;
		if(x < v[mid]){
			max = mid - 1;
		}
		else if(x > v[mid]){
			min = mid + 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}


int main(){
        
	int x = 7;
	int v[10] = {1,2,3,4,5,6,7,8,9,10};
	if(binsearch(7,v,10) == -1){
		printf("The number isn't found.\n");
	}
	else{
		printf("%d\n", binsearch(7,v,10));
		printf("The number is found!\n");
	}
	return 0;
}

