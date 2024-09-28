#include <stdio.h>
int a,b;
int produit(a, b) {
    return a * b;
}

int main() {
    int n1, n2;

    printf("veuillez entrer le premier nombre: ");
    scanf("%d", &n1);
    printf("veuillez entrer le deuxieme nombre: ");
    scanf("%d", &n2);

    printf("Le produit de %d et %d est %d\n", n1, n2, produit(n1, n2));

    return 0;
}
