#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char number[] = "123456789";

    int alphabetIndex = 0;
    int numberIndex = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%c ", alphabet[alphabetIndex]);
            alphabetIndex = (alphabetIndex + 1) % 26;
        }
        for (int j = 0; j < i + 1; j++) {
            printf("%c ", number[numberIndex]);
            numberIndex = (numberIndex + 1) % 9;
        }
        printf("\n");
    }

    return 0;
}