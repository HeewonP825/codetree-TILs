#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num[3];
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    int array[4];
    array[0] = num[0] * num[1];
    array[1] = num[1] * num[2];
    array[2] = num[0] * num[2];
    array[3] = num[0] * num[1] * num[2];

    int i, judge[4][2] = { 0 };
    for(i=0; i<4; i++) {
        if(array[i] % 2 == 0) {
            judge[i][0] = array[i];
            judge[i][1] = 0;
        }
        else {
            judge[i][0] = array[i];
            judge[i][1] = 1;
        }
    }

    int j, rank = 0;
    for(j=0; j<4; j++) {
        if((judge[j][1] == 1) && (judge[j][0] > rank))
            rank = judge[j][0];
    }

    printf("%d", rank);

    return 0;
}