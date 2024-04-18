#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num, array[100] = { 0 };

    scanf("%d", &num);

   int i;
    for(i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }

    int j, sum = 0;
    for(j = 0; j < num; j++) {
        sum += array[j];
        if(sum > 200) {
            printf("%d\n", sum);

            double average = (double) sum / (j + 1); 
            printf("%.1lf\n", average);
            
            return 0;
        }
    }

    return 0;
}