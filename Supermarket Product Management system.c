//program to mantain product information.
/*
Author:Brian Ndung'u Oyeka
Registration number:BCS-05-0544/2026
Description:Unit offered in this Semester program
Date:10/09/2026
Version 1
*/

#include<stdio.h>
//Define the product structure

struct product
{
    int productCode;
    char name[34];
    float price;
    int quantity;
};

//Declare a structure variable and input product details.

int main()
{
    struct product p1;
    int totalStock_value;
    
   printf("Enter the code of the product:");
   scanf("%d",&p1.productCode);
   getchar();
   
   printf("Enter the name of the product:");
   fgets(p1.name,sizeof(p1.name),stdin);
   
   printf("Enter the Unit prince:");
   scanf("%f",&p1.price);
   
   printf("Enter the quality im stock:");
   scanf("%d",&p1.quantity);
   
   //calculate the total value of the available stock.
   
   totalStock_value=p1.quantity * p1.price;
   
   //Display the product details and stock value.
   
   printf("\n====PRODUCTS DETAILS====\n");
  
  printf("The product code=%d\n",p1.productCode);
  printf("The name of the product=%s\n",p1.name);
  printf("The unit price=%.2f\n",p1.price);
  printf("The quantity in stock=%d\n",p1.quantity);
  printf("The total value of stock=%d\n",totalStock_value);
  
  return 0 ;
}

    