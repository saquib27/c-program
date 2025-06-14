#include<stdio.h>
void main(){
float price[3];
printf("enter three price:");

for(int i=0;i<=2;i++)
{
    scanf("%f",&price[i]);
}
printf("total price of 1st item: %f\n",price[0]+(0.18*price[0]));
printf("total price of 2nd item: %f\n",price[1]+(0.18*price[1]));
printf("total price of 3rd item: %f\n",price[2]+(0.18*price[2]));





}