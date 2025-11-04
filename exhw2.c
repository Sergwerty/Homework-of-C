#include <stdio.h>

int gcd(int a,int b){
    int temp;
    while(b != 0){
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;

}
int main(){
    int x = 10;
    int y = 15;

    int g = gcd(x,y);
    printf("%d",g);
}