/*
AUTHOR: BRIAN NDUN'GU OYEKA
REGISTRATION NUMBER:BCS-05-0544/2026
DESCRIPTION:A program for entering students marks
DATE:05/10/2026
Version 1
*/
#include<stdio.h>
int main()
{
    int marks;
    char choice;
    do
    {
    do 
    {
        printf("Enter the marks between 0 and 100:");
        scanf("%d",&marks);
        if(marks<0 || marks>100)
        {
            printf("Invalid marks!!Please input marks between 0 and 100:");
        }
    }while(marks < 0 || marks > 100);
        if(marks>=80)
        {
            printf("marks:%d,Grade:A\n",marks);
        }
        else if(marks>=70)
        {
            printf("marks:%d,Grade:B\n",marks);
        }
        else if(marks>=60)
            {
                printf("marks:%d,Grade:C\n",marks);
            }
            else if(marks>=50)
            {
                printf("marks:%d,Grade:D\n",marks);
            }
            else
            {
                printf("marks:%d,Grade:E\n");
            }
            printf("Do you want to enter another student marks?(y/n)");
            scanf("%c",&choice);
        }
        while(choice =='y'||choice =='Y');
        printf("program ended");
        
        return 0;
    }