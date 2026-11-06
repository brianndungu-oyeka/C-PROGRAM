//EMPLOYEE RECORD MANAGEMENT USING FILE IN  C.

/*
NAME:BRIAN NDUNG'U OYEKA
REGISTRATION NUMBER:BCS-05-0544/2026
DATE:05/11/2026
Version 1
*/

#include<stdio.h>
#include<stdlib.h>

void writeEmployee();
void readEmployee();
void appendEmployee();

int main()
{
    writeEmployee();
  readEmployee();
    appendEmployee();
    
    return 0 ;
}

void writeEmployee()
{
    FILE*fptr;
    int identificationNumber;
    char fullNames[40];
    char department[30];
    
    fptr=fopen("//storage//emulated//0//householdemployee.txt","w");
    if(fptr==NULL)
    {
        printf("ERROR IN CREATING THE FILE!!");
        exit(1);
    }
        
        //prompt the user to enter the details.
        printf("\n===EMPLOYEE RECORD MANAGEMENT====\n");
        
        printf("Enter the identificationNumber:");
        scanf("%d",& identificationNumber);
        getchar();
        
        printf("Enter fullNames:");
        fgets(fullNames,sizeof(fullNames),stdin);
        
        printf("Enter the department:");
        fgets(department,sizeof(department),stdin);
             getchar() ;
             
             printf("The file has been created successfully");
             
             fclose(fptr);
    
             
}

 void readEmployee()
{
  FILE *fptr;
    int ch;
    
  fptr=fopen("//storage//emulated//0//household//employee.txt","r");
  if(fptr==NULL)
  {
      printf("ERROR IN READING THE FILE");
      exit(1);
  }
  printf("\n===EMPLOYEE RECORD MANAGEMENT===\n");
  
  //read from file null character.
  
  while (ch=fgetc(fptr)!=EOF)
  {
      putchar(ch);
  }
  printf("The file has been read successfully");
  fclose(fptr);
}

void appendEmployee()
{
    FILE*fptr;
    int identificationNumber;
    char fullNames[40];
    char department[30];
    
    fptr=fopen("//storage//emulated//0//household//employee.txt","a");
    if(fptr==NULL)
    {
        printf("Error in  appending the file");
        exit(1);
    }
    //prompt the user to enter the details
    
    printf("\n===ANOTHER EMPLOYEE RECORD MANAGEMENT===\n");
    
    printf("Enter the identificationNumber:");
    scanf("%d",& identificationNumber);
    getchar();
    
    printf("Enter fullNames:");
    fgets(fullNames,sizeof(fullNames),stdin);
    
    printf("Enter the department:");
    fgets(department,sizeof(department),stdin);
    
    fprintf(fptr,"%d %s %s",identificationNumber,fullNames,department);
    
    printf("The file has been appended successfully");
    fclose(fptr);
}