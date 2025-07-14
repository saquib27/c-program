#include<stdio.h>
  int palindrome(int a){
    int input= a;
    int check=0;
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

        int number;
        scanf("%d",&number);
        number=number+1;
        while (!palindrome(number)) {
            number=number+1;
      

        }
        printf("%d\n",number);
    }
    return 0;
}