//A C program to conver temperature to Celsius

/*


Author:Brian Ndung'u Oyeka
Reg. No:BCS-05-0544/2026
Description:A program to show whether the bank user qualifies for loan or not.
Date:10/09/2026
Version 1

*/
#include<stdio.h>
float convertToCelsius(float fahrenheit)
{
    float Celsius,Fahrenheit;
    Celsius=(fahrenheit-32)*5.0/9.0;
    return Celsius;
}
int main()
{
    float temperature,Celsius,Fahrenheit;
    printf("Enter the temperature_in_Fahrenheit:");
    scanf("%f",& Fahrenheit);
    
    Celsius=convertToCelsius(Fahrenheit);
    printf("The temperature in Celsius=%.2f\n",Celsius);
    
    return 0 ;
}


