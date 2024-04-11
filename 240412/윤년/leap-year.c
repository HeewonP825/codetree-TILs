#include <stdio.h>

int isLeapYear(int year);

int main() {
    // 여기에 코드를 작성해주세요.
    int year;
    scanf("%d", &year);

    printf("%d", isLeapYear(year));
    
    return 0;
}

int isLeapYear(int year) {
    if((year % 4 == 0) && (year % 100 != 0))
        return 1;
    else if(year % 400 == 0)
        return 1;
    else
        return 0;
}