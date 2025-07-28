#include <stdio.h>

int function(int number[], int starting, int size, int target)
{
    if (starting >= size - 1)
    {
        return 0;
    }
    int found = 0;
    for (int i = starting + 1; i < size; i++)
    {
        if (number[starting] + number[i] == target)
        {
            printf("pair found: %d,%d\n",number[starting], number[i]);
            found = 1;
        }
    }
    int nextResult = function(number, starting + 1, size, target);
    if (found || nextResult){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int numSize;

    printf("enter number of elements: ");
    scanf("%d", &numSize);
    if(numSize<2){
        printf("enter valid number of element to be paired\n");
    }
    else{

    int nums[numSize];

    printf("enter the elements:\n");
    for (int i = 0; i < numSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("enter target sum: ");
    scanf("%d", &target);

    int found = function(nums, 0, numSize, target);

    if (found == 0)
    {
        printf("no pair found\n");
    }
}
    return 0;
}