/*A positive integer is called a palindrome if its representation in the decimal system is the same when read from 
left to right and from right to left. For a given positive integer K of not more than 1000000 digits, write the value
 of the smallest palindrome larger than K to output. Numbers are always displayed without leading zeros.

Input
The first line contains integer t, the number of test cases. Integers K are given in the next t lines.

Output
For each K, output the smallest palindrome larger than K.*/





#include<stdio.h>
  int palindrome(int a){
    long long int input= a;
    long long int check=0;
    while (a > 0) {
        check = check * 10 + (a % 10);
        a = a / 10;
    }
    return input == check;
}
int main() {
    int t;
    scanf("%d", &t);

    while (t--){

        long long number;
        scanf("%llu",&number);
        number=number+1;
        while (!palindrome(number)) {
            number=number+1;
      

        }
        printf("%llu\n",number);
    }
    return 0;
}