#include<stdio.h>
void main(){
    int x;
    printf("enter total number of number\n");
    scanf("%d",&x);
int number[x];
printf("enter your numbers \n");
for(int i=0;i<x;i++)
{
    scanf("%d",&number[i]);
}
    int missing;
    missing=number[0];
    for(int i=0;i<x;i++)
    {
        if(number[i]!=missing){
            printf("missing number is: %d\n",missing);
        }
    }
}











