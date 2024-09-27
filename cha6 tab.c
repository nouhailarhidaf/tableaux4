#include <stdio.h>

int main() {
int n,f;
int T[50],val,i ;
    printf("veuillez entrer le nombre des elements du tableau: \n");
    scanf("%d",&n);
    printf("veuille entrer le facteur de multiplication: \n");
    scanf("%d",&f);
    for (i=0;i<n;i++){
        printf("veuillez entrer la valeur %d \n",i+1);
        scanf("%d",&T[i]);
        T[i]*=f;
}
for(i=0;i<n;i++){
  printf("T[%d]=%d \n",i+1,T[i]);
    }

    return 0;
}
