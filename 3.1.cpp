#include <stdio.h>

int main() {
    int A[2][10];
    int count = 0;

    printf("введите элементы: ");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%i", &A[i][j]);
        }
    }
    printf("Ёлементы первой строки, больше соответствующих элементов второй строки:\n");
    for (int j = 0; j < 10; j++) {
        if (A[0][j] > A[1][j]) {
            printf("%i", A[0][j]);
            count++;
        }

    }
    printf("\nкол-во %i\n", count);

    return 0;
}