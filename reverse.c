#include <stdio.h>
int main()
{
    int total_number_of_element;
    printf("enter total number of number\n");
    scanf("%d", &total_number_of_element);
    int number[total_number_of_element];
    printf("enter your numbers \n");
    for (int i = 0; i < total_number_of_element; i++)
    {
        scanf("%d", &number[i]);
    }
        printf("array in reverse\n");
    for(int i=(total_number_of_element-1);i>=0;i--)
    {
        printf("%d \n",number[i]);
    }
   return 0; 
}