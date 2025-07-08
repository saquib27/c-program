/*MIN To MAX
You are given an array 
A
A of size 
N
N.

Let 
M
M be the minimum value present in the array initially.
In one operation, you can choose an element 
A
i
A 
i
​
  
(
1
≤
i
≤
N
)
(1≤i≤N) and an integer 
X
X 
(
1
≤
X
≤
100
)
(1≤X≤100), and set 
A
i
=
X
A 
i
​
 =X.

Determine the minimum number of operations required to make 
M
M the maximum value in the array 
A
A.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer 
N
N - the size of the array.
The next line of each test case contains 
N
N space-separated integers 
A
1
,
A
2
,
…
,
A
N
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
  - the elements of the array.
Output Format
For each test case, output on a new line, the minimum number of operations required to make 
M
M the maximum value in the array 
A
A.

Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
N
≤
100
1≤N≤100
1
≤
A
i
≤
100
1≤A 
i
​
 ≤100*/


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
        int min;
        min=a[0];
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
            }
        }  
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>min){
            count=count+1;
            }
        }
        printf("%d\n",count);
     }

    return 0;
}
