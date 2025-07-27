#include<stdio.h>
int main(){
    int total_number_of_element;
    printf("enter total number of element\n");
    scanf("%d", &total_number_of_element);
    int number[total_number_of_element];
    printf("enter your numbers \n");
    for (int i = 0; i < total_number_of_element; i++)
    {
        scanf("%d", &number[i]);
    }
    int x,y;
    printf("from");
    scanf("%d",&x);
    printf("to");
    scanf("%d",&y);
    if(y,x>total_number_of_element)
    {
        printf("invalid index\n");
    }
    else
    {
     for  (int i=x,j=y;i<=j;i++,j--)
     {
        int swap=number[i];
        number[i]=number[j];
        number[j]=swap;
     }
        printf("array in reverse\n");
    for(int i=0;i<=(total_number_of_element-1);i++)
    {
        printf("%d \n",number[i]);
    }
}
   return 0; 
}

