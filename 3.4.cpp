#include <stdio.h>

int main() {
    int n, m;
    int chislo;

    printf("������� ������ ������� (n): ");
    scanf("%i", &n);
    printf("������� ������ ������� (m): ");
    scanf("%i", &m);

    printf("������� �����:");
    scanf("%i", &chislo);

    int A[n][m];
    printf("������� ��������: ");
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
                printf("\n�������: %i, %i,%i", chislo, i, j);
                return 1;
            }
        }
        if (!found) {
            printf("������ �� �������");
        }

    }
    printf("\n");

    return 0;
}