#include <stdio.h>

int main() {
    int A[10][2];
    int v = 0, first = 0;

    printf("введите элементы: ");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    first = A[0][0] - A[0][1];
    for (int i = 0; i < 10; i++) {
        v = A[i][0] - A[i][1];
        printf("%d ", v);
        if ((v * first) <= 0) {
            return 1;
        }
    }
    printf("\n");

    return 0;
}