#include <stdio.h>

void f(int * s,int * o, int * e,int n){
    int counto = 0;
    int counte = 0;
    for(int i = 0;i< n;i++){
        if(*(s+i) % 2 == 0){
            *(e + counte) = *(s+i);
            counte++; 
        }
        else{
            *(o + counto) = *(s+i);
            counto++;
        }
    }
}

int main(){
    int start[10] = {1,2,3,4,5,6,7,8,9,10};
    int odd[10] = {};
    int even[10] = {};

    f(start,odd,even,10);
    for(int i = 0;i< sizeof(odd)/4;i++){
        printf("%d ",*(odd + i));
    }
    printf("\n");
    for(int i = 0;i< sizeof(even)/4;i++){
        printf("%d ",*(even + i));
    }


}