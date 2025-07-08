/*Largest and Second Largest
You are given an array 
A
A of 
N
N integers.
Find the maximum sum of two distinct integers in the array.

Note: It is guaranteed that there exist at least two distinct integers in the array.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains single integer 
N
N — the size of the array.
The next line contains 
N
N space-separated integers, denoting the array 
A
A.
Output Format
For each test case, output on a new line, the maximum sum of two distinct integers in the array.

Constraints
1
≤
T
≤
1000
1≤T≤1000
2
≤
N
≤
10
5
2≤N≤10 
5
 
1
≤
A
i
≤
1000
1≤A 
i
​
 ≤1000
The sum of 
N
N over all test cases does not exceed 
2
⋅
10
5
2⋅10 
5
 .*/


#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        // Your code goes here
        int max=0;
        int max2=0;
        max=a[0];
        for(int i=0;i<n;i++){

           if(a[i]>=max) {
             max=a[i];
         }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < max && a[i] > max2) {
            max2 = a[i];
        

    }
}
printf("%d\n",max+max2);

    }
    return 0;
}
