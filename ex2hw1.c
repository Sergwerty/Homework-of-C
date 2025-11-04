#include <stdio.h>

int main(int argc,char * argv[]){
    int num,sum = 0,count = 0;
    printf("Type the numbers(max 9998): ");
    scanf("%d",&num);
    while (num < 9999)
    {
        sum +=num;
        count++;
        scanf("%d",&num);
    }
    if (count > 0)
    {
        printf("The average is equal to %.2f.\n", (float)sum/count);
    }
    else{
        printf("Invalid");

    }
    
    return 0;
    
    
}