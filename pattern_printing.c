#include<stdio.h>
int main(){
    int row,column;
printf("enter number of stars in a row");
scanf("%d",&row);
printf("enter number of row");
scanf("%d",&column);
for (int i=1;i<=column;i++)
{
    for ( int i=1;i<=row;i++){
    
        printf("*");
    
}
printf("\n"); 
}
    


return 0;
}