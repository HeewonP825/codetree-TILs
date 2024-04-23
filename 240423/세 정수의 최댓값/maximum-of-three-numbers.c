#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[3] = { 0 };

    scanf("%d %d %d", &n[0], &n[1], &n[2]);

    int max = -100, i;
    for(i=0; i<3; i++) {
        if(n[i] >= max)
            max = n[i];
    }

    printf("%d", max);

    return 0;
}