//Для массива из 2 строк и 10 столбцов напечатать каждый элемент 1-ой строки, который больше находящегося в одном с ним столбце элемента 2-ой строки, и 
//число таких случаев.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int count=0;
    double **A;

     A = new double*[2];
    //Ввод матрицы [2 x 10]
    printf("Введите матрицу [2 x 10] \n");
    for(int i = 0; i < 2; i++) {
        A[i] = new double[10];
        for(int j = 0; j < 10; j++) {
             printf("Введите элемент [%i][%i]: ", i, j);
             scanf("%lf", &A[i][j]);
        }
    }

    printf("Вы ввели матрицу: \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 10; j++) {
             printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

     for (int j = 0; j < 10; j++) {
        if (A[0][j] > A[1][j]) {
            printf("%.2lf", A[0][j]);
            count++;
        }

    }

    printf("\nКоличество элементов: %d\n", count);
    for (int i = 0; i < 2; i++) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}

#include<iostream>
#include<math.h>
#include<stdio.h>

int main() {
    int n,i,m;
    int  g;
    bool flag;
    
    printf("Введите количество элементов в массиве ");
    scanf("%i", &n);
    if (n<=0 || n>20){
        while (n<=0 || n>20){
            printf("Введено неверное количество\n");
            printf("Введите новое количество элементов в массиве ");
            scanf("%i", &n);
        }
    }


    float *A;
    A=new float[n];
    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &A[i]);
    }
    printf("Введенные элементы массива:");
    for (int i = 0; i < n; i++) {
        printf(" %f ", A[i]);
    }
    
    flag = true; // Флаг для отслеживания сортировки
    i=0;
    while (i<n){
        if (A[i] < A[i-1]) {
            flag=false;
            g=i;
        } i++;}
    if (!flag) {
        printf("\nМассив не отсортирован\n");
        printf("На позиции %d нарушение: %f\n", g, A[g]);
        }

    else printf("\n Массив отсортирован по возрастанию.\n");
    
    return 0;
}
