#include<stdio.h>
void main(){
    int a,b,c;
    printf("ENTER AGE OF a\n");
    scanf("%d",&a);
    printf("ENTER AGE OF b\n");
    scanf("%d",&b);
    printf("ENTER AGE OF c\n");
    scanf("%d",&c);
    if(a<b && a<c)
    {
        printf("a is youngest");
    }

    else if(b<a && b<c)
    {
        printf("b is youngest");
    }
    else if(c<a && c<b)
    {
        printf("c is youngest");
    }
    else 
    {
        printf("ages are same\n");
    }


    




}