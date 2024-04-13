#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num[3];
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    int array[7];
    array[0] = num[0];
    array[1] = num[1];
    array[2] = num[2];
    array[3] = num[0] * num[1];
    array[4] = num[1] * num[2];
    array[5] = num[0] * num[2];
    array[6] = num[0] * num[1] * num[2];

    int i, judge[7][2] = { 0 };
    for(i=0; i<7; i++) {
        if(array[i] % 2 == 0) {
            judge[i][0] = array[i];
            judge[i][1] = 0;
        }
        else {
            judge[i][0] = array[i];
            judge[i][1] = 1;
        }
    }

    int j, oddRank = 0, evenRank = 0;
    for(j=0; j<7; j++) {
        if((judge[j][1] == 1) && (judge[j][0] > oddRank))
            oddRank = judge[j][0];
        else if((judge[j][1] == 0) && (judge[j][0] > evenRank))
            evenRank = judge[j][0];
    }

    if(oddRank != 0) {
        printf("%d", oddRank);
    }
    else {
        printf("%d", evenRank);
    }

    return 0;
}