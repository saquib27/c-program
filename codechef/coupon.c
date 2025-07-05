/*Take discount or Not
There are 
N
N items in a shop. You know that the price of the 
i
i-th item is 
A
i
A 
i
​
 . Chef wants to buy all the 
N
N items.

There is also a discount coupon that costs 
X
X rupees and reduces the cost of every item by 
Y
Y rupees. If the price of an item was initially 
≤
Y
≤Y, it becomes free, i.e, costs 
0
0.

Determine whether Chef should buy the discount coupon or not. Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of two lines of input.
The first line of the test case contains three space-separated integers — 
N
N, 
X
X, and 
Y
Y.
The second line contains 
N
N space-separated integers — 
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
 .
Output Format
For each test case, output COUPON if Chef should buy the discount coupon, and NO COUPON otherwise.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings coupon, CouPoN, and COUPON will all be treated as equivalent.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
N
≤
100
1≤N≤100
1
≤
X
,
Y
≤
10
5
1≤X,Y≤10 
5
 
1
≤
A
i
≤
10
5
1≤A 
i
​
 ≤10 
5*/



#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        // Your code goes here
        int originalprice=0;
        int priceafterdiscount=0;
            int overallDP=0;
        for(int i=0;i<n;i++){
            originalprice=a[i]+originalprice;

            priceafterdiscount=a[i]-y;
            if(priceafterdiscount<=0)
                priceafterdiscount=0;
            
        
            overallDP=priceafterdiscount+overallDP;
            
        }
            
        
            int cost=x+overallDP;
        
            if(originalprice>cost){
                printf("COUPON\n");
            
            }
            else{
                printf("NO COUPON\n");
            }

        
        
        }
        
    

    return 0;
}
