#include <stdio.h>

int maxrow(int a[3][3]){
    int max = 0;
    for(int j = 0;j<3;j++){
        int sum = 0;    
        for(int i = 0;i<3;i++){
            sum+= *(*(a+i)+j);
        }
        if(max<sum) max = sum; 
    }
}

int maxcolumn(int a[3][3]){
    int max = 0;
    for(int i = 0;i<3;i++){
        int sum = 0;    
        for(int j = 0;j<3;j++){
            sum+= *(*(a+i)+j);
        }
        if(max<sum) max = sum; 
    }
}

int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int maxr = maxrow(a);
    printf("%d ",maxr);

    int maxc = maxcolumn(a);
    printf("%d ",maxc);
}