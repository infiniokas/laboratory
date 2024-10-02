﻿#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main() {

    setlocale(LC_ALL, "RUS");
    
    double P, T, q, N; // Ввод данных

    // Проверка условий 
    do {
        printf("Введите начальную массу вещества (P): ");
        scanf("%lf", &P);
        printf("Введите ежедневное изъятие вещества (T): ");
        scanf("%lf", &T);
    } while (P < T);

    do {
        printf("Введите процент улетучивания за сутки (q): ");
        scanf("%lf", &q);
    } while (q > 100);

    do {
        printf("Введите количество дней (N): ");
        scanf("%lf", &N);
    } while (N < 0);

                 
    q /= 100.0; // Преобразование процента в десятичную дробь

    printf("День   Масса вещества(кг)    \n");
    for (int i = 1; i <= N; i++) {
        P -= T; // Изымаем вещество
        P -= (P * q); // Учитываем испарение
        if (P < 0) { // Если изымаемое вещество закончилось
            printf("");
        }
        else {
            printf("%d\t   %.2lf\n", i, P);
        }
    }

    return 0;
}