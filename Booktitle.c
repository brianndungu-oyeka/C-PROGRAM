
/*
Author:Brian Ndung'u Oyeka
Registration No:BCS-05-0544/2026
Date:21/09/2026
Version 1
*/

#include <stdio.h>

int main()
{
    FILE*fptr;
    char title[100];
    
   //Enter the book title.
   printf("Enter the book title:");
   fgets(title,sizeof(title),stdin);
   
   //open the file in append mode
   fptr=fopen("borrowed_books.txt","a");
  //check whether the file opened successfully
  if(fptr==NULL)
  {
   printf("Error in opening the file");
   return 1;
  }
  //store the book title in the file.
  fprintf(fptr,"%s",title);
  
  //close the file
  fclose(fptr);
  
  //Display confirmation
  printf("Book title successfully stored");
  
  return 0;
}
   