#include<stdio.h>
void main(){
    int sum=0,b;
    printf("enter number");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
{
    sum= sum+i;
}
printf("%d\n",sum);
}