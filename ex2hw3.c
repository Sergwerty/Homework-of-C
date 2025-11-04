#include <stdio.h>
#include <string.h>

int f(char arr[][20],int n,char* word){
    int counter = 0;
    for(int i = 0;i<n;i++){
        if(strcmp(arr[i], word) == 0){
            counter++;
        }
    }
    return counter;
}

int main(){
    char a[10][20] = {"Ball","Foot","Ball","Nigga","ball"};
    int g = f(a,10,"Ball");
    printf("%d",g);
}