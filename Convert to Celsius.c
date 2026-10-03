//A program that takes temperature in Fahrenheit and gives as celsius
/*
AUTHOR:BRIAN NDUNG'U OYEKA
REGISTRATION NUMBER:BCS-05-0544/2026
DESCRIPTION:A program meant to convert temperature from Fahrenheit to celsius.
DATE:03/10/2026
VERSION 1
*/
#include<stdio.h>
#include<math.h>


int main()
{
    float temperature,Fahrenheit,Celsius;
    printf("Enter the temperature_in_Fahrenheit:");
    scanf("%f",&Fahrenheit);
    Celsius=(Fahrenheit-32)*5.0/9.0;
    printf("Celsius=%f",Celsius);
    
    return 0 ;
}