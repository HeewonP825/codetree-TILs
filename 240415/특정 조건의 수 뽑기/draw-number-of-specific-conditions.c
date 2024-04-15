#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int closest = 200;  // 200보다 큰 수 중에서 가장 작은 수로 초기화
    int above = -1;     // 100 이상의 수 중에서 가장 작은 수로 초기화

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        
        if (abs(100 - num) < abs(100 - closest)) {
            closest = num;
        } else if (num >= 100 && (above == -1 || num < above)) {
            above = num;
        }
    }

    printf("%d %d\n", closest, above == -1 ? -1 : above);
    
    return 0;
}