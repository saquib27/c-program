
//     int total_number_of_element;
//     printf("enter total number of element\n");
//     scanf("%d", &total_number_of_element);
//     int number[total_number_of_element];
//     printf("enter your numbers \n");
//     for (int i = 0; i < total_number_of_element; i++)
//     {
//         scanf("%d", &number[i]);
//     }
//     int sum;
//     printf("sum should be \n");
//     scanf("%d", &sum);
//     for (int i = 0; i < total_number_of_element; i++)
//     {
//         for (int j = i + 1; j < total_number_of_element; j++)
//         {
//             if (number[i] + number[j] == sum)

//             {
//                 printf("pair %d %d \n", i, j);
//             }
//         }
//     }
// }
//  int total_number_of_element_in_array_1;   
//  printf("enter total number of element for array 1\n");
//  scanf("%d", &total_number_of_element_in_array_1);    
//      int number[total_number_of_element_in_array_1];
//     printf("enter your numbers \n");   
//      for (int i = 0; i < total_number_of_element_in_array_1; i++)
//     {
//          scanf("%d", &number[i]);
//     }

//     int total_number_of_element_in_array_2;   
//  printf("enter total number of element for array 2 \n");
//  scanf("%d", &total_number_of_element_in_array_2);    
//      int number[total_number_of_element_in_array_2];
//     printf("enter your numbers \n");   
//      for (int i = 0; i < total_number_of_element_in_array_2; i++)
//     {
//          scanf("%d", &number[i]);
//     }

//     int bigarray[]=(number[total_number_of_element_in_array_1]+number[total_number_of_element_in_array_2]);
//     printf("big array: %ls\n",bigarray);


// }
//#include<stdio.h>
// int main(){
//     int numSize;
 
//     scanf("%d", &numSize);
//     int nums[numSize];
   
//     for (int i = 0; i < numSize; i++)
//     {
//         scanf("%d", &nums[i]);
//     }
//     int target;
    
//     scanf("%d", &target);
//     for (int i = 0; i < numSize; i++)
//     {
//         for (int j = i + 1; j < numSize; j++)
//         {
//             if (nums[i] + nums[j] == target)

//             {
//                 printf(" %d %d \n", i, j);
//             }
//         }
//      }

// }
#include<stdio.h>
int main(){
    int numsize;
    printf("enter size of array\n");

    scanf("%d",&numsize);
    int num[numsize];
    printf("enter non decresing array\n");
    for (int i = 0; i < numsize; i++)
    {
        scanf("%d", &num[i]);
    }
    int target;
    printf("target\n");
    scanf("%d",&target);
    int i=0;
    int j=numsize-1;
    int found = 0;

    while (i < j) {
        int sum = num[i] + num[j];

        if (sum == target) {
            printf(" %d %d\n", num[i], num[j]);
            found = 1;
            int left_val = num[i];
            int right_val = num[j];
            while (i < j && num[i] == left_val) i++;
            while (i < j && num[j] == right_val) j--;
        }
        else if (sum > target) {
            j--;
        }
        else {
            i++;
        }
    }

    if (found==0) {
        printf("No pair found.\n");
    }

    return 0;
}
