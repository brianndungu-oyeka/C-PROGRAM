//a simple patient registration system.

/*u
Author:Brian Ndung'u Oyeka
Registration number:BCS-05-0544/2026
Description:Unit offered in this Semester program
Date:12/11/2026
Version 1
*/

#include<stdio.h>

//define patient structure

struct patient
{
    int patientID;
    char name[30];
    int age;
    float temperature;
    int daysAdmitted;
    
};
//declare a structure variable and input patient details

int main()
{
    struct patient p1;
    int totalAccomodation_cost;
    int daysAdmitted;
    
    
    printf("Enter the patient ID:");
    scanf("%d",&p1.patientID);
    getchar();
    printf("Enter the name of the patient:");
    fgets(p1.name,sizeof(p1.name),stdin);
    
    
    printf("Enter the age of the patient:");
   scanf("%d",&p1.age);
    
    
    printf("Enter the patient's body temperature:");
    scanf("%f",&p1.temperature);
    
    printf("Enter the no. of days admitted:");
    scanf("%d",&p1.daysAdmitted);


totalAccomodation_cost=p1.daysAdmitted * 2500;
//Display all the patient's details and calculated cost.

printf("\n====PATIENT'S RECORD====\n");

printf("Patient's ID=%d\n",p1.patientID);
printf("Name of the patient=%s\n",p1.name);
printf("Age of the patient=%d\n",p1.age);
printf("Body temperature=%.2f\n",p1.temperature);
printf("Days admitted=%d\n",p1.daysAdmitted);
printf("Total accomodation cost =Ksh%d\n",totalAccomodation_cost);

return 0;
}