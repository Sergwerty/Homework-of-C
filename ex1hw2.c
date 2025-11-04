#include <stdio.h>

int isperfect(int n){
    int sum = 0,i=1;
    while(i < n){
        if(n % i == 0){
            sum +=i;
        }
        i++;
    }
    if(sum == n){
        return 1;
    }
    return 0;
}

int main(){
    for(int i=1;i<=1000;i++){
        if(isperfect(i)){
            printf("%d ",i);
        }
    }

}