#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int sqrt_n = sqrt(n);

    for (int i = 1; i <= sqrt_n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    for (int i = sqrt_n; i >= 1; i--) {
        if (n % i == 0 && i != n / i) { 
            printf("%d ", n / i);
        }
    }

    return 0;
}