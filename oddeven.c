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
    int even=0;
    int odd=0;
    for(int i=0;i < total_number_of_element;i++){
        if(number[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

    }
    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);
    return 0;
}