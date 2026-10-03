//A program meant to calculate Electricity bill
/*
AUTHOR:BRIAN NDUNG'U OYEKA
REGISTRATION NUMBER:BCS-05-0544/2026
DESCRIPTION:A program designed to calculate total electricity bill
DATE:03/10/2026
Version 1
For the first 100 units @Ksh. 10 0er Unit
For the next 100 units @Ksh. 15 per unit
Above 200 units@Ksh.20 per unit
*/

#include<stdio.h>
int main()
{
    float units,bill;
    printf("Enter the units consumed:");
    scanf("%f",& units);
     if(units<=100)
     {
         bill=units * 10;
     }
     else if(units<=200)
     {
         bill=units * 15;
     }
     else
     {
         bill=units * 20;
     }
     printf("bill=%.2f",bill);
     return 0 ;
}