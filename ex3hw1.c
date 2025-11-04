#include <stdio.h>

int main(){
    int n = 7;
    int mid = (n+1)/2;
    for(int i = 1;i<=n; i++){
        int stars;
        if(i<=mid){
            stars = 2*i - 1;
        }
        else{
            stars = 2*(n-i) + 1;
        }
        int spaces = (n-stars)/2;

        for(int j = 0;j<spaces;j++){
            printf(" ");
        }

        for(int k = 0;k<stars;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}