#include<stdio.h>
void main(){

int first_number,second_number;
printf("enter first number\n");
scanf("%d",&first_number);
printf("enter second number\n");
scanf("%d",&second_number);

first_number=first_number+second_number;
second_number=first_number-second_number;
first_number=first_number-second_number;


printf("first number: %d \n",first_number);
printf("second number: %d",second_number);






    
}