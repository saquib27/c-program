#include<stdio.h>

int removeelement(int* nums, int size, int val) {
    int k = 0; 
    
    for (int i = 0; i < size; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i]; 
            k++;
        }
    }
    
    return k;
}



int main() {
    int nums[100];
    int size, val;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &val);

    int k = removeelement(nums, size, val);

    printf("%d", k);
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}