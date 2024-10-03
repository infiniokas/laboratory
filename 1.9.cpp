#include <stdio.h>
#include <math.h>

double calculate_value(double x, double z) {
    if (z <= 0 || (1 + pow(x, 4)) == 0) {
        printf("Ошибка: деление на ноль или логарифм от отрицательного числа\n");
        return 0; // Возвращаем NaN для обозначения ошибки
    }
    return (sqrt(1 + z * z) + abs(pow(log(z), 3)) / (1 + pow(x, 4))) * sin(7 * x);
}
int main()
{ //setlocale(LC_ALL, "Russian");
    double Xstart, Xstop, Zstart, Zstop, HX, HZ;
    double x, z, y;
    printf("Введите значение Xstart ");
    scanf("%lf", &Xstart);
    printf("Введите значение Xstop ");
    scanf("%lf", &Xstop);
    printf("Введите значение Zstart ");
    scanf("%lf", &Zstart);
    printf("Введите значение Zstop ");
    scanf("%lf", &Zstop);
    printf("Введите значение HX ");
    scanf("%lf", &HX);
    printf("Введите значение HZ ");
    scanf("%lf", &HZ);
    if (Xstop <= Xstart || Zstop <= Zstart || HX <= 0 || HZ <= 0) {
        printf("Некорректный ввод данных\n");
        return 1;
    }

    printf("Таблица значений по заданной формуле\n");
    printf("%6s |", "x");
    for (z = Zstart; z <= Zstop; z += HZ) {
        printf("%10.2lf|", z);
    }
    printf("\n");

    for (x = Xstart; x <= Xstop; x += HX) {
        printf("%6.2f |", x);
        for (z = Zstart; z <= Zstop; z += HZ) {
            double sqrt_z_sq = sqrt(1 + z * z); // Вычисление sqrt(1 + z*z) один раз
            double value = calculate_value(x, z);
            if (isnan(value)) {
                printf("  Ошибка  |");
            }
            else {
                printf("%10.5lf|", value);
            }
        }
        printf("\n");
    }

    return 0;
}