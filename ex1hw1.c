#include <stdio.h>

int main(int argc, char* argv[]){

    int accnum;
    float startbalance;
    float totalcharg;
    float totalcredit;
    float creditlimit;
    float newbalance;
    
    start:
    printf("Type your account number(-1 to end): ");
    scanf("%d",&accnum);
    if (accnum < -1)
    {
        printf("Please type a valid number (-1 to end). ");
        goto start;
    }
    
    printf("Type the starting balance: ");
    scanf("%f", &startbalance);
    printf("Type the total charge: ");
    scanf("%f",&totalcharg);
    printf("Type the total credit: ");
    scanf("%f",&totalcredit);
    printf("Type the credit limit: ");
    scanf("%f",&creditlimit);

    printf("NOTION: The new balance is equal to (beginning balance + charges – credits)\n");
    printf("Your account number is %d.\n",accnum);
    printf("The starting balance is %.2f.\n",startbalance);
    printf("Your total charge is %.2f.\n",totalcharg);
    printf("Your total credit is %.2f.\n",totalcredit);
    printf("Your credit limit is %.2f.\n",creditlimit);
    newbalance = startbalance + totalcharg - totalcredit;
    printf("Your new balance is %.2f.\n",newbalance);

    if(newbalance > creditlimit){
        printf("Credit limit exceeded!!!");
    }


    return 0;

}