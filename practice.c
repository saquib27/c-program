// #include<stdio.h>
// int main()

// {

//     // printf("%m");

// //     int n;
// //    for(n = 7; n!=0; n--)
// //      printf("n = %d", n--);
// //    getchar();
// //    return 0;
// // int i;
// //     i = (1, 4);         
// //     printf("i = %d\n", i);
// // unsigned int i=10;
// //     while(i-- >= 0)
// //         printf("%d ",i);
// //     return 0;
// // int x, y = 2, z, a;
// //     if (x = y % 2)
// //         z = 2;
// //     a = 2;
// //     printf("%d %d ", z, x);

//     // int total_number_of_element;
//     // printf("enter total number of number\n");
//     // scanf("%d", &total_number_of_element);
//     // int number[total_number_of_element];
//     // printf("enter your numbers \n");
//     // for (int i = 0; i < total_number_of_element; i++)
//     // {
//     //     scanf("%d", &number[i]);
//     // }
//     // int x,y;
//     // printf("from");
//     // scanf("%d",&x);
//     // printf("to");
//     // scanf("%d",&y);
//     //  for  (int i=x,j=y;i<=j;i++,j--)
//     //  {
//     //     int swap=number[i];
//     //     number[i]=number[j];
//     //     number[j]=swap;
//     //  }
//     //     printf("array in reverse\n");
//     // for(int i=0;i<=(total_number_of_element-1);i++)
//     // {
//     //     printf("%d \n",number[i]);
//     // }
    
//     // int total_number_of_element;
//     // printf("enter total number of element\n");
//     // scanf("%d", &total_number_of_element);
//     // int number[total_number_of_element];
//     // printf("enter your numbers \n");
//     // for (int i = 0; i < total_number_of_element; i++)
//     // {
//     //     scanf("%d", &number[i]);
//     // }
//     // int sum;
//     // printf("sum should be \n");
//     // scanf("%d", &sum);
//     // for (int i = 0,j=i+1; i,j < total_number_of_element; i++,j++)
//     // {
        
//     //         if (number[i] + number[j] == sum)

//     //         {
//     //             printf("pair %d %d \n", i, j);
//     //         }
//     //     }

// // int min=0;
// //     int total_number_element;
// //     printf("enter number of element\n");
// //     scanf("%d",&total_number_element);
// //     int array[total_number_element];
// //     printf("enter your element");
// //     for(int i=0;i<total_number_element;i++)
// //     {
// //         scanf("%d",&array[i]);
// //     }
// //     min=minimum(array[total_number_element]);
// //      }

// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--) {
//         int n, x, y;
//         scanf("%d %d %d", &n, &x, &y);
//         int a[n];

//         for (int i = 0; i < n; i++) {
//             scanf("%d", &a[i]);
//         }
//         // Your code goes here
//         int originalprice=0;
//         int priceafterdiscount=0;
//         for(int i;i<n;i++){
//             originalprice=a[i]+originalprice;

//             priceafterdiscount=a[i]-y;
//             int overallDP=0;
//             overallDP=priceafterdiscount+overallDP;
            
//             if(priceafterdiscount<=0){
//                 priceafterdiscount=0;
//             }
        
//             int cost=x+overallDP;

//             if(originalprice>cost){
//                 printf("COUPON");
//             }
//             else{
//                 printf("NO COUPON");
//             }
//         }
        
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--) {
//         int n, x;
//         scanf("%d %d", &n, &x);
//         int a[n], b[n];
        
//         for (int i = 0; i < n; i++) {
//             scanf("%d", &a[i]);
//         }
        
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &b[j]);
//         }
        
//         // Your code goes here
//         int cost=0;

//         for(int i=0;i<=n;i++){
//         if(a[i]>=x){
//             cost=b[i]+cost;
//         }
//         }
//         printf("%d\n",cost);
//     }
// return 0;
// }
#include <stdio.h>

int main(void) {
	// your code here
	int x;


    do{
        scanf("%d",&x);

        if(x==42)
    {
      break;
        
    printf("%d\n",x);
    }
   
}
    while (1);  

	return 0;
}