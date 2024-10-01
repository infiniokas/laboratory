#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double a, b;
	int n;
	double step;
	double x, y;
        do {
	printf("Введите a:");
	scanf("%lf", &a);
	} while (a<0);

	do {
		
		printf("Введите b (b > a):");
		scanf("%lf", &b);
	
	} while (b <= a);

	do {

		printf("Введите n (количество значений [a,b]):");
		scanf("%i", &n);
	
	} while (n <= 0);

	step = (b - a) / n * 1.0;
	printf("    Таблица функций\n");
	printf("N        x         y\n");

	for (int i = 1; i <= n; i++) {

		x = a + step * i;
		y = (2.0 + 2.0 / 3.0 + pow(x / 2.7, 1.0 / 3.0) - sqrt(exp(-3.0 * x))) * fabs(sin(5.0 * x));
		printf("%i   %lf   %.5lf\n", i, x, y);
	}

}

