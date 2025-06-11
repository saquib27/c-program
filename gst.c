#include<stdio.h>
void main(){
float price[3];
printf("enter three price:");
scanf("%f",&price[0]);
scanf("%f",&price[1]);
scanf("%f",&price[2]);

printf("total price of 1st; %f\n",price[0]+(0.18*price[0]));
printf("total price of 2nd; %f\n",price[1]+(0.18*price[1]));
printf("total price of 3rd; %f\n",price[2]+(0.18*price[2]));





}