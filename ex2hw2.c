#include <stdio.h>

int gcd(int a , int b){
    int min;
    int max;
    if(a<b){
        min = a;
        max = b;
    }
    else{
        min = b;
        max = a;
    }
    for(int i = 0;i<min;i++){
        if(min % (min - i) == 0){
            if(max % (min - i) == 0){
                return min - i;
            }
        }
    }
}

int main(){
    int x = 10;
    int y = 10;

    int g = gcd(x,y);

    printf("%d",g);
}