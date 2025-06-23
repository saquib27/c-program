#include<stdio.h>
int main(){
    int line;
    printf("enter number of lines\t");
    scanf("%d",&line);

    for(int i=1;i<=line;i++)
    {
        for (int j=1;j<=i;j++)
        printf("*");
    
    printf("\n");
    }
}