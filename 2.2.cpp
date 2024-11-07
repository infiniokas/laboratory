//В заданном массиве X1, X2, …, Xn изменить значения всех положительных элементов, умножив их значения на K, а отрицательные элементы
//уменьшить вдвое, при этом подсчитать количество элементов, абсолютная величина которых не превышает L.
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
#include <stdio.h>

int main() {
    double **A;  
    int n;
    printf("введите кол-во:");
    scanf("%d",&n);
    A=new double*[2];
    printf("Введите матрицу\n");
    for(int i = 0; i < 2; i++) {
        A = new double*[n];
        for(int j = 0; j < n; j++) {
            printf("Введите элемент [%i][%i]: ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }



    double first = A[0][0] - A[0][1];
    printf("Разности элементов строк:\n");
    
    bool c = true;
    for (int i = 0; i < 2 && c; i++){
        for(int j = 0; j < 10 && c; j++) {
            double d = A[i][0] - A[i][1];
            printf("%lf ", d);

        if (d * first <= 0) {
            c = false;
        }
     }
    }

    delete[] A;

    return 0;
