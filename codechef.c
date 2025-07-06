 /*Find maximum in an Array
Given a list of 
N
N integers, representing height of mountains. Find the height of the tallest mountain.

Input:
First line will contain 
T
T, number of testcases. Then the testcases follow.
The first line in each testcase contains one integer, 
N
N.
The following line contains 
N
N space separated integers: the height of each mountains.
Output:
For each testcase, output one line with one integer: the height of the tallest mountain for that test case.

Constraints
1
≤
T
≤
10
1≤T≤10
1
≤
N
≤
100000
1≤N≤100000
0
≤
0≤ height of each mountain 
≤
10
9
≤10 
9*/
 
 
 #include <stdio.h>

int main() {
	// your code goes here
int testcases;
scanf("%d",&testcases);
if(testcases>=1 && testcases<=10){
for(int i=0;i<testcases;i++){
int number;
scanf("%d",&number);
if(number>=1 && number<=100000){
int array[number];
for(int i=0;i<number;i++){
    scanf("%d",&array[i]);}
int max;
max=array[0];
for(int i=1;i<number;i++){
    if(array[i]>max){
        max=array[i];
    }
}

printf("%d\n",max);
}
}
}
return 0;
}

