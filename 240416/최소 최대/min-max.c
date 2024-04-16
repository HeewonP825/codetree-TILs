#include <stdio.h>

int main() {
    int n, array[100];

    scanf("%d", &n);

    int i;
    for(i=0; i<n; i++) {
        scanf("%d", &array[i]);
    }

    int j, min = 100, max = 0;
    for(j=0; j<n; j++) {
        if(array[j] >= max)
            max = array[j];
    }

    for(j=0; j<n; j++) {
        if(array[j] < min)
            min = array[j];
    }

    printf("%d %d", min, max);

    return 0;
}