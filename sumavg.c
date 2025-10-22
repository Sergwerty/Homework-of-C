#include <stdio.h>

int sum(int *a ,int size){
    int i = 0;
    int sum = 0;
    for(;i <= size - 1;++i){
        sum += *(a + i);
    }
    return sum;
}

float avg(int (*f)(int *array ,int s),int *a,int size){
    float b = 0;
    b = f(a,size) / size;
    return b;
}

int main() {
    int a[] = {1,2,3,4,5};
    printf("%d\n", sum(a,5));
    printf("%.2f\n", avg(sum,a,5));

    return 0;
}
