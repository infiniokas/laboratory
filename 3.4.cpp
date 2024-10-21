//Проверить, есть ли хотя бы один столбец, содержащий элемент, равный заданному числу, и найти его номер.
#include <stdio.h>

int main() {
    int n, m;
    int chislo;

    printf("Ââåäèòå ðàçìåð ìàññèâà (n): ");
    scanf("%i", &n);
    printf("Ââåäèòå ðàçìåð ìàññèâà (m): ");
    scanf("%i", &m);

    printf("Ââåäèòå ÷èñëî:");
    scanf("%i", &chislo);

    int A[n][m];
    printf("ââåäèòå ýëåìåíòû: ");
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
                printf("\níàéäåíî: %i, %i,%i", chislo, i, j);
                return 1;
            }
        }
        if (!found) {
            printf("íè÷åãî íå íàéäåíî");
        }

    }
    printf("\n");

    return 0;
}
