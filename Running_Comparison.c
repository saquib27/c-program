/*Running Comparison
Alice and Bob recently got into running, and decided to compare how much they ran on different days.

They each ran for 
N
N days — on the 
i
t
h
i 
th
  day, Alice ran 
A
i
A 
i
​
  meters and Bob ran 
B
i
B 
i
​
  meters.

On each day,

Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.
For example, on a given day

If Alice ran 
200
200 meters and Bob ran 
500
500, Alice would be unhappy but Bob would be happy.
If Alice ran 
500
500 meters and Bob ran 
240
240, Alice would be happy and Bob would be unhappy.
If Alice ran 
300
300 meters and Bob ran 
500
500, both Alice and Bob would be happy.
On how many of the 
N
N days were both Alice and Bob happy?

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of three lines of input.
The first line of each test case contains a single integer 
N
N — the number of days.
The second line of each test case contains 
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
  — the distances run by Alice on the 
N
N days.
The third line of each test case contains 
N
N space-separated integers 
B
1
,
B
2
,
…
,
B
N
B 
1
​
 ,B 
2
​
 ,…,B 
N
​
  — the distances run by Bob on the 
N
N days.
Output Format
For each test case, output on a new line the number of days when both Alice and Bob were happy.*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        // Your code goes here
        int count=n;
        for(int i=0;i<n;i++){
        if(a[i]>2*b[i] || b[i]>2*a[i]){
            count=count-1;
        }
            

            }
            
        
        printf("%d\n",count);
        
    }
    

    return 0;
}
