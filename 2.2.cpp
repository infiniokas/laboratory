#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n, K, L;
    do {
        printf("Введите размер массива (n): ");
        scanf("%i", &n);
    } while (n >= 20 || n <= 0);

    int A[n];
    printf("Введите элементы массива: ");
    for (int i = 0; i < n; i++) {
        scanf("%i", &A[i]);
    }
    printf("Введите K: ");
    scanf("%i", &K);
    printf("Введите абсолютную величину (L): ");
    scanf("%i", &L);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0) {
            A[i] *= K;
        }
    }
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            A[i] /= 2;
        }
    }
    for (int i = 0; i < n; i++) {
        if (abs(A[i]) <= L) {
            count++;
        }
    }

    printf("Массив:");
    for (int i = 0; i < n; i++) {
        printf("%i ", A[i]);
    }
    printf("\n");

    printf("Количество элементов, которые не превышают L: %d\n", count);


    return 0;
}