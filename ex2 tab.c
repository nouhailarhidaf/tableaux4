#include <stdio.h>

int main() {
	int n,i;
float T[50],val ;
    printf("veuillez entrer le nombre des elements du tableau: \n");
    scanf("%d",&n);
    for ( i=0;i<n;i++){
        printf("veuillez entrer la valeur %d \n",i+1);
        scanf("%f",&T[i]);
}
printf("voila les elements du tableaux: \n");
for(i=0;i<n;i++){
    printf("%.2f \n",T[i]);
}

    return 0;
}
