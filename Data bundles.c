//A program  that displays data bundles offers.
/*  
AUTHOR: BRIAN NDUNG'U OYEKA
REGISTRATION NUMBER: BCS-05-0544/2026
DESCRIPTION:A program meant to disply data offers
DATE:03/10/2026
VERSION 1 
*/

#include<stdio.h>
int main()
{
    int choice;
    printf("TUNUKIWA DATA BUNDLES OFFERS MENU\n");
    printf("1. 100MB @Ksh. 50 valid 24hrs\n");
    printf("2. 500MB @Ksh. 200 valid 24 hrs\n");
    printf("3. 1GB @Ksh.350 valid 24hrs\n");
    printf("4. 2GB @Ksh.600 valid 24 hrs\n");
    
    printf("Enter your bundle choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        printf("You have successfuly purchased 100MB @Ksh.50 valid 24hrs");
        break;
        
        case 2:
        printf("You have successfuly purchased 500MB @Ksh. 200 valid 24hrs");
        break;
        
        case 3:
        printf("You have successfuly purchased 1GB @Ksh.350 valid 24hrs");
        break;
        
        case 4:
        printf("You have successfuly purchased 2GB @Ksh 600 valid 24hrs");
        break;
        
        default:
        printf("Invalid choice");
    }
    return 0 ;
}