//program to display whether the bank user qualifies for bank loan or not.

/*

(Multiline Comment)
Author:Brian Ndung'u Oyeka
Reg. No:BCS-05-0544/2026
Description:A program to show whether the bank user qualifies for loan or not.
Date:10/09/2026
Version 1

*/

//preprocessor directive
#include <stdio.h>

int main() {
    int age;
    float income;
    
    printf("Enter your age: ");
    scanf("%d",& age);
    
    printf("Enter yoir income:");
    scanf("%f", & income);
    
    if (age >=23 &&  income >=23,000)
    {
        printf("Congragulations!!!,you have qualified on the application of your loan\n");
    }
    else
    {
   printf("Sorry!!ءYou have not qualigied on your loan application\n");
    }
 
 return 0;
    
}