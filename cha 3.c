#include <stdio.h>
int main() {
int n,s=0;
int T[50],val,i ;
    printf("veuillez entrer le nombre des �l�ment de tableau: \n");
    scanf("%d",&n);
    for ( i=0;i<n;i++){
        printf("veuillez entrer la valeur %d \n",i+1);
        scanf("%d",&T[i]);
        s+=T[i];
}
printf("voila le totale %d: \n",s);
    return 0;
}
