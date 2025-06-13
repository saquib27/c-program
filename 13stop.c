#include<stdio.h>
void main(){

    int x;


    do{
        printf("enter your number\n");
        scanf("%d",&x);
        printf("%d\n",x);

        if(x==0)
        {
            continue;
        }
        
        if (x%13==0){
        break;
        }
        }
while(1); printf("your number is divisible by 13\n");
}