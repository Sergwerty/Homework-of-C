#include <stdio.h>

int gcdR(int a,int b){
    if(b == 0){
        return a;
    }
    return gcdR(b,a%b);
}

int main(){
    int x = 10;
    int y = 15;
    int g = gcdR(x,y);
    printf("%d",g);
}