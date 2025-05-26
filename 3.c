#include <stdio.h>

int main() {
    int X;
    printf("Введите количество уровней ёлки (X): ");
    scanf("%d", &X);

    for (int i = 1; i <= X; i++) {
        for (int j = 0; j < X - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < X - 1; i++) {
        for (int j = 0; j < X - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
