#include <stdio.h>
int main()
{
    int total_number_of_element;
    printf("enter total number of number\n");
    scanf("%d", &total_number_of_element);
    int number[total_number_of_element];
    int is_equal = 1;
    printf("enter your numbers \n");
    for (int i = 0; i < total_number_of_element; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < total_number_of_element / 2; i++)
    {
        int first_value = number[i];
        int last_value = number[total_number_of_element - i - 1];

        if (first_value != last_value)
        {
            is_equal = 0;
            break;
        }
    }

    if (is_equal == 1)
    {
        printf("array is a palindrome\n");
    }
    else
    {
        printf("not a palindrome\n");
    }
    return 0;
}
