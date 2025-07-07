/*Cost of Groceries
Chef visited a grocery store for fresh supplies. There are 
N
N items in the store where the 
i
t
h
i 
th
  item has a freshness value 
A
i
A 
i
​
  and cost 
B
i
B 
i
​
 .

Chef has decided to purchase all the items having a freshness value greater than equal to 
X
X. Find the total cost of the groceries Chef buys.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers 
N
N and 
X
X — the number of items and the minimum freshness value an item should have.
The second line contains 
N
N space-separated integers, the array 
A
A, denoting the freshness value of each item.
The third line contains 
N
N space-separated integers, the array 
B
B, denoting the cost of each item.
Output Format
For each test case, output on a new line, the total cost of the groceries Chef buys.

*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        int a[n], b[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[j]);
        }
        
        // Your code goes here
        int cost=0;

        for(int i=0;i<n;i++){
        if(a[i]>=x){
            cost=b[i]+cost;
        }
        }
        printf("%d\n",cost);
    }
return 0;
}