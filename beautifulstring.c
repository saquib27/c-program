#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char* str, int len) {
    int left = 0, right = len - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
bool isNonDecreasing(const char* s, const int* indices, int k) {
    for (int i = 1; i < k; i++) {
        if (s[indices[i - 1]] > s[indices[i]]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        char s[11]; 
        scanf("%d %s", &n, s);
        
        bool found = false;
        int bestIndices[10];
        int bestCount = 0;
        
        for (int mask = 0; mask < (1 << n); mask++) {
            int pIndices[10];
            int pCount = 0;
            char remaining[11];
            int remCount = 0;
            
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    pIndices[pCount++] = i;
                } else {
                    remaining[remCount++] = s[i];
                }
            }
            remaining[remCount] = '\0';
            
    
            if (isNonDecreasing(s, pIndices, pCount) && isPalindrome(remaining, remCount)) {
                found = true;
                bestCount = pCount;
                for (int i = 0; i < pCount; i++) {
                    bestIndices[i] = pIndices[i];
                }
                break;
            }
        }
        
        if (found) {
            printf("%d\n", bestCount);
            if (bestCount > 0) {
                for (int i = 0; i < bestCount; i++) {
                    printf("%d ", bestIndices[i] + 1); 
                }
                printf("\n");
            }
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}