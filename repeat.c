#include<stdio.h>
void main(){

    int number[10];

printf("enter 10 number:\n");
scanf("%d",&number[0]);
scanf("%d",&number[1]);
scanf("%d",&number[4]);
scanf("%d",&number[5]);
scanf("%d",&number[6]);
scanf("%d",&number[7]);
scanf("%d",&number[8]);
scanf("%d",&number[9]);
scanf("%d",&number[2]);
scanf("%d",&number[3]);
int x;
printf("number to count\n");
scanf("%d",&x);
int repeat=0;
for (int i=0;i<10;i++)

{
    if( number[i]==x) repeat++;
}
printf("repeat= %d\n",repeat);


}