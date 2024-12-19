#include <stdio.h>
int n;
unsigned long long fact( n) {
    if (n = 0 || n = 1) {
        return 1;
    }b
    return n * fact(n - 1);
}

int main() {
    printf("veuillez entrer un nombre entier: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'est pas definie pour les nombres negatifs.\n");
    }
     else {
        printf("La factorielle de %d est: %llu\n", n, fact(n));
    }

    return 0;
}
