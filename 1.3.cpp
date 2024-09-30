#include <stdio.h>

int main() {
    double P, T, q, N;

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

    // Преобразование процента в десятичную дробь
    q /= 100.0;

    printf("День   Масса вещества(кг)    \n");
    for (int i = 1; i <= N; i++) {
        P -= T; // Изымаем вещество
        P -= (P * q); // Учитываем испарение
        if (P < 0) {
            printf("");
        }
        else {
            printf("%d\t   %.2lf\n", i, P);
        }
    }

    return 0;
}