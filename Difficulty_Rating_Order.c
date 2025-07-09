#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int d[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &d[i]);
        }
        
        // Your code goes here
        int found=0;
        for(int i=0;i<n-1;i++){
            if(d[i]>d[i+1]){
                found=1;
                break;
            }
            
            }
            if(found==0){
                printf("Yes");
            }
            else{
                printf("No");
            }
            
            
        }
    }
