#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int i;
    for(i=1; n*i<200; i++) {
        printf("%d ", n*i);

        if((n * i) % 10 == 0) {
            break;            
        }
    }

    return 0;
}