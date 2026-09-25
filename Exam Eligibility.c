/*
Author:Brian Ndung'u Oyeka
Registration number:BCS-05-0544/2026'
Description:A program to check whether the student is eligible for final exams
Date:25/09/2026
Version 1
*/

#include <stdio.h>

int main()
{
    float attendance,average_marks;
    
    printf("Enter your attendance:\t");
    scanf("%f",& attendance);
    
    printf("Enter your average_marks:\t");
    scanf("%f",& average_marks);
    
    if(attendance  >= 75 && average_marks  >= 40)
    {
        printf("ELIGIBLE");
    }
    else
    {
        printf("NOT ELIGIBLE");
    }
    return 0 ;
}