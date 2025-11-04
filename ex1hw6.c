#include <stdio.h>

void f(int** a,int** b,int** c,int n,int mid,int m){
    for(int i = 0;i<n;i++){
        for(int j = 0; j<m;j++){
            *(*(c+i)+j) = 0;
            for(int k = 0; k<mid;k++){
                *(*(c+i)+j) += *(*(a+i)+k) * *(*(b+k)+j);
            }
        }
    }
    
}

int main(){
    int firstMatrix[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    int secondMatrix[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int resultMatrix[3][3];

    int *first[3];
    first[0] = firstMatrix[0]; 
    first[1] = firstMatrix[1];
    first[2] = firstMatrix[2];

    int *second[2];
    second[0] = secondMatrix[0];
    second[1] = secondMatrix[1];

    int *result[3];
    result[0] = resultMatrix[0];
    result[1] = resultMatrix[1];
    result[2] = resultMatrix[2];

    f(first,second,result,3,2,3);

    for(int i = 0; i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}