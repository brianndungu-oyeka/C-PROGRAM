// a program meamt to find the volume and surface area respectively.
/*
Author:Brian Ndung'u Oyeka
Registration No:BCS-05-0544/2026
Description:A program meant to find the volume and surface area of a cylinder.
Date:21/09/2026
Version 1
*/

#include <stdio.h>
#define PI 3.14
int main()
{
    int radius,height,volume,surfacearea;
    
    printf("Enter the radius of the cylinder in centimetres:");
    scanf("%d", & radius);
    
    printf("Enter the height of the cylinder in centimetres:");
    scanf("%d",& height);
    
    volume= PI*radius*radius*height;
    surfacearea=2*PI*radius*radius +2*PI*radius*height;
    
    printf("volume=%d \n", volume);
    printf("surface area=%d \n",surfacearea);
    
    return 0 ;
}