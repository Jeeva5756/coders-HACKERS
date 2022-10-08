/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main(){
    int num,tic,balance;
    printf("user input amount:");
    scanf("%d",&num);
    printf("enter the number of tickets:");
    scanf("%d",&tic);
    if(num%5==0)
    {
        printf("print the ticket\n");
        if(balance=num-(tic*5))
        {
        printf("balance amount:%d\n",balance);
        }
        if(num>(num*5));
        {
            printf("the given amount is not enough");
        }
    }
    else if (num%5!=0)
    {
        printf("invalid coin\n");
    }
}

