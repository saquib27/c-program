#include <stdio.h>

int main()
{
    // your code goes here
    int element;
    scanf("%d", &element);
    int search;
    scanf("%d", &search);
    int array[element];
    for (int i = 0; i < element; i++)
    {
        scanf("%d", &array[i]);
    }
    int found = 0;
    for (int i = 0; i <= element; i++)
    {
        if (array[i] == search)
        
        {
            found=1;
            break;
        }
       
    }
    if (found==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;


}