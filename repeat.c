#include<stdio.h>
void main(){

    int number[10];

printf("enter 10 number:\n");
for(int i=0;i<=9;i++)
{
    scanf("%d",&number[i]);
}
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