#include <stdio.h>
void main(){

 int number[10];

 printf("enter 10 number:\n");
 for(int i=0;i<=9;i++)
{
    scanf("%d",&number[i]);
}

int min;
min=number[0];
for(int i=0;i<=9;i++)

    if(number[i]<=min) 
   min=number[i];


printf("minimum %d\n",min);







}