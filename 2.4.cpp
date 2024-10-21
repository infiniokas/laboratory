#include <stdio.h>

int main() {
    int n;

    do {
        printf("������� ������ ������� (n): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 20);

    int A[n];
    printf("������� �������� �������:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("��������� �������� �������:");
    for (int i = 0; i < n; i++) {
        printf(" %d ", A[i]);
    }

    int flag = 1; // ���� ��� ������������ ����������
    for (int i = 1; i < n; i++) {
        if (A[i] < A[i - 1]) {
            if (flag) {
                printf("\n������ �� ������������\n");
                flag = 0;
            }
            printf("�� ������� %d ���������: %d\n", i, A[i]);
        }
    }

    if (flag) {
        printf("\n ������ ������������ �� �����������.\n");
    }

    return 0;
}