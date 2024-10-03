#include <stdio.h>
#include <math.h>

int main() {
    float a, b, eps, fa, fb, fc, c, x;
    do {
        printf("a = ", a);
        scanf("%f", &a);
        printf("b = ", b);
        scanf("%f", &b);
        printf("eps = ", eps);
        scanf("%f", &eps);
    } while (a > 2 || b<0 || a < 0 || b>2 || a>b || eps < 0 || eps>1);
    fa = cos(a) - exp(-(sqrt(a + 1))) + (1.0 / 9.0) - a; // 1.=1.0
    fb = cos(b) - exp(-(sqrt(b + 1))) + (1.0 / 9.0) - b;
    printf("%f\n", fa);
    printf("%f\n", fb);
    if (fa * fb > 0) {
        printf("корней нет");
    }
    else {
        while (b - a > 2 * eps) {
            c = (b + a) / 2.;
            fa = cos(a) - exp(-(sqrt(a + 1))) + (1.0 / 9.0) - a;
            fc = cos(c) - exp(-(sqrt(c + 1))) + (1.0 / 9.0) - c;
            if (fa * fc > 0)
                a = c;
            else
                b = c;
        }
        x = (b + a) / 2.;
        printf("%f", x);
    }
    return 0;
}