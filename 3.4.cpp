#include <stdio.h>

int main() {
    int n, m;
    int chislo;

    printf("¬ведите размер массива (n): ");
    scanf("%i", &n);
    printf("¬ведите размер массива (m): ");
    scanf("%i", &m);

    printf("¬ведите число:");
    scanf("%i", &chislo);

    int A[n][m];
    printf("введите элементы: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
            printf(" %d ", A[i][j]);
        }
    }

    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == chislo) {
                found = 1;
                printf("\nнайдено: %i, %i,%i", chislo, i, j);
                return 1;
            }
        }
        if (!found) {
            printf("ничего не найдено");
        }

    }
    printf("\n");

    return 0;
}