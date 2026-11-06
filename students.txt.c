// Student Record Management Using File Handling In C programming.

/*
Author:Brian Ndung'u Oyeka
Registration No:BCS-05-0544/2026
Date:21/09/2026
Version 1
*/

#include<stdio.h>
#include<stdlib.h>

void saveStudent();
void displayStudent();
void addStudent();

int main()
{
   saveStudent();
   displayStudent();
   addStudent();
   return 0 ;
}

void saveStudent()
{
   FILE*fptr;
   int admission_Number;
   char names[300];
   char course[50];
   fptr=fopen("//storage//emulated//0//C files//student.txt","w");
   if(fptr==NULL)
   {
       printf("ERROR IN CREATING THE FILE");
       exit(1);
   }
   //Enter student name,admission number and the name of the course.
   printf("\n=====StudentDetails======\n");
   printf("Enter student's admission_Number:");
   scanf("%d",&admission_Number);
   
   getchar();//useful for cleaning leftovers
   
   printf("Enter student's names:\n");
   fgets( names,sizeof(names),stdin);
   
   printf("Enter the course:");
   fgets(course,sizeof(course),stdin);
   
   fprintf(fptr,"%d %s %s\n",admission_Number,names,course);
   //fputs(admission_Number,names,course,fptr);
   
   printf("Student records has been saved successfully");
   
   fclose(fptr);
}
  
  void displayStudent()
  {
      FILE *fptr;
      int ch;
      fptr=fopen("//storage//emulated//0//C files//student.txt","r");
      if(fptr==NULL)
      {
          printf("ERROR IN OPENING THE FILE");
          exit(1);
      }
      //display student record detail by detail.
      printf("\n====STUDENT RECORD READING===\n");
      
      while(ch=fgetc(fptr) !=EOF)
      {
          putchar(ch);
      }
      printf("The student record has been read successfully.\n");
      
      fclose(fptr);
  }
  void addStudent()
  {
  FILE*fptr;
  int admissionNumber;
  char names[40];
  char course[30];
  
  fptr=fopen("//storage//emulated//0//C files//student.txt","a");
  if(fptr==NULL)
  {
     printf("Error in Opening the file");
     exit(1);
  }
      //prompt the user to enter additional student details.
      
      printf("Enter the student admissionNumber:");
      scanf("%d",& admissionNumber);
      
      getchar();
      
      printf("Enter student full names:");
      fgets(names,sizeof(names),stdin);
      
      printf("Enter the course:");
      fgets(course,sizeof(course),stdin);
      
      fprintf(fptr,"%d %s %s",admissionNumber,names,course);
      
      printf("Another student details has been added successfully");/storage/emulated/0/C files
     
     fclose(fptr);
     
    }
     