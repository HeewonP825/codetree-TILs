#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int closest = 200;  
    int above = -1;     

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        
        if (abs(100 - num) < abs(100 - closest)) {
            closest = num;
        } else if (num >= 100 && (above == -1 || num < above)) {
            above = num;
        }
    }

    printf("%d %d\n", closest, above);
    
    return 0;
}