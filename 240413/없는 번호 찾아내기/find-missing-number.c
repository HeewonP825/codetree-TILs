#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num[30] = { 0 };
    int i;

    for(i=0; i<30; i++) {
        scanf("%d", &num[i]);
    }

    int j, k, temp[30] = { 0 };
    for(j=0; j<30; j++) {
        for(k=1; k<=30; k++) {
            if(num[j] == k) {
                temp[k-1] = num[j];
            }
            else
                continue;
        }
    }

    int ans[2] = { 0 }, m;
    for(m=0; m<30; m++) {
        if(temp[m] == 0) 
            printf("%d\n", m+1);
    }
    
    return 0;
}