//Проверить, что в массиве все элементы упорядочены по возрастанию, т.е. все пары элементов Xi и Xi+1 удовлетворяют условию Xi < Xi+1. Если есть
// пара элементов, не удовлетворяющая условию, найти её номер i.
#include <stdio.h>

int main() {
    int n;

    do {
        printf("Ââåäèòå ðàçìåð ìàññèâà (n): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 20);

    int A[n];
    printf("Ââåäèòå ýëåìåíòû ìàññèâà:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Ââåäåííûå ýëåìåíòû ìàññèâà:");
    for (int i = 0; i < n; i++) {
        printf(" %d ", A[i]);
    }

    flag = 1; // Флаг для отслеживания сортировки
    i=0;
    while (flag && i<n)
        if (A[i] < A[i-1]) 
            flag=false;
        else
            i++;
    
    if (!flag) {
        printf("\nМассив не отсортирован\n");
        printf("На позиции %d нарушение: %d\n", i, A[i]);
        }

    else printf("\n Массив отсортирован по возрастанию.\n");

    return 0;
}
