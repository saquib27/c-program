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
    int unique_array[total_number_of_element];
    int x=0;
    unique_array[x]=number[0];
    for(int i=0;i<total_number_of_element;i++){
        if(unique_array[x]!=number[i]){
            x=x+1;
            unique_array[x]=number[i];
            
        }
    }
    printf("unique sorted array\n");
    for(int i=0;i<=x;i++){
        printf("%d\n",unique_array[i]);
    }

    
    return 0;
}
