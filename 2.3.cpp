#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n, K, L;
    do {
        printf("������� ������ ������� (n): ");
        scanf("%i", &n);
    } while (n >= 20 || n <= 0);

    int A[n];
    printf("������� �������� �������: ");
    for (int i = 0; i < n; i++) {
        scanf("%i", &A[i]);
    }

    int max_f = A[0], max_s = A[1];

    if (max_s > max_f) {
        max_f = max_s + max_f;
        max_s = max_f - max_s;
        max_f = max_f - max_s;
    }

    for (int i = 2; i < n; i++) {
        if (A[i] > max_f) {
            max_s = max_f;
            max_f = A[i];
        }
    }
    for (int i = 2; i < n; i++) {
        if (A[i] > max_s && A[i] != max_f) {
            max_s = A[i];
        }

    }

    printf("��� ���������� ��������: %d � %d\n", max_f, max_s);

    return 0;
}