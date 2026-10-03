//A program to calculate total water bill per month
/*
AUTHOR:BRIAN NDUNG'U OYEKA
REGISTRATION NUMBER:BCS-05-0544/2026
DESCRIPTION:A program meant to calculate the total water bill cost per month.
DATE:02/10/2026
VERSION 1
0-30 Units @Kes20 per unit.
31-60 Units@Kes25 per unit.
Above 60 units@Kes 30 per unit
*/
#include<stdio.h>
int main()
{
    float units,bill;
    printf("Enter the units consumed:");
    scanf("%f",& units);
    
    if(units<=30)
    {
        bill=units*20;
    }
    else if(units<=60)
    {
        bill=units*25;
    }
    else
    {
        bill=units*30;
    }
     printf("bill=%.2f",bill);
     
     return 0 ;
}
        
    