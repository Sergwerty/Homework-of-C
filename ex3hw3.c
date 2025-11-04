#include <stdio.h>

void f(int a[3][2],int b[2][3],int c[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            *(*(c+i)+j) = 0; 
        for(int k = 0;k<2;k++){
            *(*(c+i)+j) += *(*(a+i)+k) * *(*(b+k)+j);
        }
        }
    }
}

int main(){
    int a[3][2] = {{1,4},{2,5},{3,6}};
    int b[2][3] = {{7,8,9},{10,11,12}};
    int c[3][3];

    f(a,b,c);

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",c[i][j]);        
        }
        printf("\n");
    }
}