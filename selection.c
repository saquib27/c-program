#include <stdio.h>
#include <limits.h>
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
    for (int i = 0; i < total_number_of_element - 1; i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j <= total_number_of_element - 1; j++)
        {
            if (min > number[j])
            {
                min = number[j];
                minidx = j;
            }
        }
        int temp = number[minidx];
        number[minidx] = number[i];
        number[i] = temp;
    }
    printf("sorted array  ");
    for (int i = 0; i < total_number_of_element; i++)
    {
        printf("%d\t", number[i]);
    }
    printf("\n");
    return 0;
}