#include <stdio.h>
void main()
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
    int difference;
    printf("difference should be \n");
    scanf("%d", &difference);
    for (int i = 0; i < total_number_of_element; i++)
    {
        for (int j = i + 1; j < total_number_of_element; j++)
        {
            if (number[j] - number[i] == difference)

            {
                printf("pair %d %d \n", number[i], number[j]);
            }
        }
    }
}