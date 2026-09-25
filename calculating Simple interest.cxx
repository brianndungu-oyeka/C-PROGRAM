
/*
Author:Brian Ndung'u Oyeka
Registration Number:BCS-05-0544/2026
Description:A program to calculate simple interest
Date:29/09/2026
Version 1
*/

#include<stdio.h>
#include <math.h>

int main()
{
    float principal_amount,rate,time,simple_interest;
    
    printf("Enter the principal_amount:\t");
    scanf("%f",&principal_amount);
    
    printf("Enter the rate:\t");
    scanf("%f",&rate);
    
    printf("Enter the time:\t");
    scanf("%f",&time);
    
    simple_interest=principal_amount * time * rate/100.0;    
    printf("simple_interest=%f\n,interest");
      
      return 0 ;
}
         
        
    