#include <stdio.h>

int main()
 {
    int T1[10], T2[10], i ;

    printf("veuillez entrer les valeurs du tableau original T1:\n");
    for(i = 0; i < 10; i++) {
        printf("T1[%d]" , i + 1);
        scanf("%d", &T1[i]);
    }
    for(i = 0; i <= 10; i++) {
        T2[i] = T1[i];
    }
    printf("\les valeurs du tableau original T1 sont:\n");
    for(i = 0; i <= 10; i++) {
        printf("T1[%d] = %d\n", i + 1, T1[i]);
    }

    printf("\les valeurs du tableau copie T2 sont:\n");
    for(i = 0; i < 10; i++) {
        printf("T2[%d] = %d\n", i + 1, T2[i]);
    }

    return 0;
}
