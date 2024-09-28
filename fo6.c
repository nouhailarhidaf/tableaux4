#include <stdio.h>
int n,i;
int fibonacci(n) {
    if (n <= 0) return 0;
    if (n = 1) return 1;
    int a = 0, b = 1, c;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("veuillez entrer un entier pour obtenir le n-ieme terme de Fibonacci: ");
    scanf("%d", &n);

    int resultat = fibonacci(n);
    printf("Le terme de Fibonacci de %d est: %d\n", n, resultat);

    return 0;
}
