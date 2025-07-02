#include<stdio.h>
int main(){
    int total_number_of_element;
    printf("enter total number of number\n");
    scanf("%d", &total_number_of_element);
    int number[total_number_of_element];
    printf("enter your numbers\n");
    for (int i = 0; i < total_number_of_element; i++)
    {
        scanf("%d", &number[i]);
    }
    int sum=0;
    for(int i=0;i<total_number_of_element;i++)
        sum=sum+number[i];
    
    printf("sum= %d\n",sum);
    return 0;

}