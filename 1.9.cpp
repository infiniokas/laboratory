#include <stdio.h>
#include <math.h>

int main() {
    int N, M;
    double Xstart, Xstop, Zstart, Zstop, HX, HZ;

    printf("Введите N (количество значений по оси X): ");
    scanf("%d", &N);
    printf("Введите M (количество значений по оси Z): ");
    scanf("%d", &M);

    printf("Введите Xstart: ");
    scanf("%lf", &Xstart);
    printf("Введите Xstop: ");
    scanf("%lf", &Xstop);
    printf("Введите Zstart: ");
    scanf("%lf", &Zstart);
    printf("Введите Zstop: ");
    scanf("%lf", &Zstop);

    HX = (Xstop - Xstart) / (N - 1);
    HZ = (Zstop - Zstart) / (M - 1);

    for (int i = 0; i < N; i++) {
        double x = Xstart + i * HX;
        printf("При x = %.2lf:\n", x);
        for (int j = 0; j < M; j++) {
            double z = Zstart + j * HZ;
            if (z <= 0 || 1 + pow(x, 4) == 0) {
                printf("  Ошибка: деление на ноль или логарифм от отрицательного числа\n");
            } else {
                double y1 = sqrt(1 + z * z);
                double y2 = abs(pow(log(z), 3)) / (1 + pow(x, 4));
                double y = (y1 + y2) * sin(7 * x);
                printf("  При z = %.2lf, y = %.5lf\n", z, y);
            }
        }
        printf("\n");
    }

    return 0;
}
