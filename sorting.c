#include <stdio.h>
int main()
{
    int total_number_of_element;
    printf("enter total number of element\n");
    scanf("%d", &total_number_of_element);
    int number[total_number_of_element];
    printf("enter your numbers \n");
    for (int i = 0; i < total_number_of_element; i++)
    {
        scanf("%d", &number[i]);
    }
    int max;

    for (int i = 0; i < total_number_of_element - 1; i++)
    {

        for (int j = i + 1; j < total_number_of_element; j++)
        {
            if (number[i] >= number[j])
            {
                max = number[i];

                int swap = number[i];
                number[i] = number[j];
                number[j] = swap;
            }
        }
    }

    printf("sorting \n");
    for (int i = 0; i < total_number_of_element; i++)
    {
        printf("%d \n", number[i]);
    }

    return 0;
}
