#include<stdio.h>
void main(){
int year_of_birth,current_year;
printf("please enter your birth year\n");
scanf("%d",&year_of_birth);
printf("enter the current year\n");
scanf("%d",&current_year);
int your_age= (current_year-year_of_birth);
printf("your age %d\n",your_age);




}