#include <stdio.h>
int a,b;
int maximum(a,b) {
    return (a > b) ? a : b;
}

int main() {
    int n1, n2;
    printf("veuillez entrer le premier nombre: ");
    scanf("%d", &n1);
    printf("veuillez entrer le deuxième nombre: ");
    scanf("%d", &n2);

    printf("Le maximum entre %d et %d est %d\n", n1, n2, maximum(n1,n2));

    return 0;
}
