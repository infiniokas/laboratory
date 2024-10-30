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

   int flag = 0;
    int c = -1; 

    for (int i = 0; i < n && !flag; i++) {
        for (int j = 0; j < m && !flag; j++) {
            if (A[i][j] == chislo) {
                flag = 1;
                c = j;
            }
        }
    }

    if (found) {
        printf("Найдено: %d, столбец: %d\n", chislo, c + 1);
    } else {
        printf("Ничего не найдено\n");
    }

    return 0;
}
