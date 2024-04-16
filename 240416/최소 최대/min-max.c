#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int array[n];

    int i;
    for(i=0; i<n; i++) {
        scanf("%d", &array[i]);
    }

    int j, min = array[0], max = array[0]; 
    for(j=0; j<n; j++) {
        if(array[j] > max) 
            max = array[j];
        if(array[j] < min)
            min = array[j];
    }

    printf("%d %d", min, max);

    return 0;
}