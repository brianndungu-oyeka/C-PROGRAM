//A C program meant to calculate total Electric Bill.
/*
Author:BRIAN NDUNG'U OYEKA
Registration Number:BCS-05-0544/2026
Description:A C program meant to calculate total Electric Bill
Date:09/10/2026
Version 1
*/

#include<stdio.h>
int total(int units)
{
    int bill;
    if(units<=100)
    bill=units*10;
    else if(units<=200)
    bill= (100*10)+((units-100)*15);
    else
    bill=(100*10)+(100*15)+((units-200)*20);
    return bill;
}
int main()
{
    int units,bill;
    printf("Enter the units Consumed:");
    scanf("%d",& units);
 bill=total(units);   
    printf("The bill=%d",bill);
    
    return 0 ;
}