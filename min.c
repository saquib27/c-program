#include <stdio.h>
void main(){

 int number[10];

 printf("enter 10 number:\n");
 scanf("%d",&number[0]);
scanf("%d",&number[1]);
scanf("%d",&number[2]);
scanf("%d",&number[3]);
scanf("%d",&number[4]);
scanf("%d",&number[5]);
scanf("%d",&number[6]);
scanf("%d",&number[7]);
scanf("%d",&number[8]);
scanf("%d",&number[9]);

int min;
min=number[0];
for(int i=0;i<=9;i++)

    if(number[i]<=min) 
   min=number[i];


printf("minimum %d\n",min);







}