#include <stdio.h>
int main()
{
    int number_of_element;
    printf("enter number of element\t");
    scanf("%d", &number_of_element);
    if (number_of_element <= 0)
    {
        printf("enter valid value \n");
    }
    else
    {
        int number[number_of_element];
        printf("enter your number\n");
        for (int i = 0; i < number_of_element; i++)
        {
            scanf("%d", &number[i]);
        }
        int even=0;
        int odd=0;
        for(int i=0;i<number_of_element;i++){
            if(number[i] % 2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        printf("number of even number: %d\t",even);
        printf("\n");
        printf("number of odd number: %d\t\n",odd);
    }
}