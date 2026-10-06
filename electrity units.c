//A program to calculate and display the electricity consumption for 10 households.
/*
AUTHOR:BRIAN NDUNG'U OYEKA
REGISTRATION NUMBER:BCS-05-0544/2026
DESCRIPTION:A program meant to calculate and display electrical consumption for 10 households.
DATE:05/10/2026
VERSION 1
*/
#include <stdio.h>
int main()
{
    int household,units;
    
    for (int household = 1; household <= 10; household++)
    {
    printf("Enter the units consumed by the household %d:",household);
    scanf("%d",&units);
    
    
    printf("household%d units consumed%d\n",household, units);
    }
    return 0;
}