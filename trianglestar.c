#include<stdio.h>
int main(){
    int line;
    printf("enter number of lines\t");
    scanf("%d",&line);

    for(int i=1;i<=line;i++)
    {
        for (int j=i;j<=1;j--)
        printf("*");
    
        printf("\n");
    }
}