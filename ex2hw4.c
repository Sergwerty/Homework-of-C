#include <stdio.h>

void reverse(int* arr,int n){
    int temp;
    for(int i = 0;i<n/2;i++){
        temp = *(arr+i);
        *(arr+i) = *(arr + (n-1-i));
        *(arr +(n-1-i)) = temp;

    }
}

int main(){
    int a[4] ={1,2,3,4};
    reverse(a,4);
    for(int i = 0;i<4;i++){
        printf("%d ",a[i]);
    }
}