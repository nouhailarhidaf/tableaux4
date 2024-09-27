#include <stdio.h>

int main()
{
    int T[5] = {1, 2, 3, 4, 5};
    int t = sizeof(T) / sizeof(T[0]);

    printf("Tableau original: ");
    for (int i = 0; i < t; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    for (int i = 0; i < t / 2; i++) {
        int tp = T[i];
        T[i] = T[t - i - 1];
        T[t - i - 1] = tp;
    }
    printf("Tableau inverse: ");
    for (int i = 0; i < t; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
