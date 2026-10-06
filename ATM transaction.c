/*
AUTHOR:BRIAN NDUNGU OYEKA
REGISTRATION NUMBER:BCS-05-0544/2026
DESCRIPTION:A  program meant to facilitate bank transaction.
DATE:05/10/2026
Version 1
*/
#include<stdio.h>
int main()
{
    int balance=50000;
    int withdrawal;
    while(balance>0)
  
    {
       
        printf("Enter the amount to withdraw:");
        scanf("%d",&withdrawal);
        
        if(withdrawal==0)
        {
            break;
        }
        if(withdrawal<=balance)
        {
            balance=balance - withdrawal;
            printf("Your transaction is successful!!");
            printf("Your account balance is %d\n",balance);
        }
        else
        {
            printf("Failed due to insufficient funds in your account!!");
            printf("Your account balance is %d\n",balance);
        }
    }
        return 0;
    }