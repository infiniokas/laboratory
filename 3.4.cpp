//Проверить, есть ли хотя бы один столбец, содержащий элемент, равный заданному числу, и найти его номер.
#include <stdio.h>

int main() {
    int n, m;
    int chislo;

    printf("введите n ");
    scanf("%i", &n);
    printf("введите m ");
    scanf("%i", &m);

    printf("введите число");
    scanf("%i", &chislo);

    double** A;
    A = new double*[n];
    printf("введенные значения");
    for (int i = 0; i < n; i++) {
         A[i] = new double[m];
        for (int j = 0; j < m; j++) {
            scanf("%lf", &A[i][j]);
            printf(" %lf ", A[i][j]);
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
