//A C program to calculate totalfare

/*

(Multiline Comment)
Author:Brian Ndung'u Oyeka
Reg. No:BCS-05-0544/2026
Description:A program to show whether the bank user qualifies for loan or not.
Date:10/09/2026
Version 1

*/
#include<stdio.h>
float calculateFare(float distance)
{
   float total; 
    total=distance*50;
    return total;
}
int main()
{
    float distance,fare;
    float total;
    printf("Enter the distance covered:");
    scanf("%f",& distance);
    fare=calculateFare(distance);
    
    printf("The totalfare=%.2f\n",fare);
    
    return 0;
}
