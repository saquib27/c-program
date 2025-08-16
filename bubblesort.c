#include <stdio.h>
#include <stdbool.h>
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

    for (int i = 0; i <= total_number_of_element - 1; i++)
    {
        bool check = true;
        for (int j = 0; j < total_number_of_element - 1 - i; j++)
        {
            if (number[j] > number[j + 1])
            {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
                check = false;
            }
        }
        if (check == true)
            break;
    }
    printf("\n");
    for (int i = 0; i < total_number_of_element; i++)
    {
        printf("%d\n", number[i]);
    }
    return 0;
}
