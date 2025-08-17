#include <stdio.h>
void roman(int num) {
    int integer[]   = {1000, 900, 500, 400, 100, 90,  50, 40, 10,  9,  5, 4, 1};
    char *romansymbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (num >= integer[i]) {
            printf("%s", romansymbol[i]);
            num = num-integer[i];
        }
    }
    printf("\n");
}

int main() {
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    
        printf("roman number: ");
        roman(number);
    

    return 0;
}
