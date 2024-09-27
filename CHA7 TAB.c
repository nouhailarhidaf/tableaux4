#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t[100];
	int i,j,n,tmp;
	printf("veuillez entrez la nombre des elements du tableau:\n");
	scanf("%d",&n);
	printf("veuillez entrez les elements du tableau:\n");
	for(i=0;i<n;i++)
	   scanf("%d",&t[i]);
	for(i=n-1;i>0;i--)
	   for(j=0;j<i;j++)
	      if(t[j]>t[j+1])
	      {
	      	 tmp=t[j];
	      	 t[j]=t[j+1];
	      	 t[j+1]=tmp;
		  }
	printf("Tableau trie:\n");
	for(i=0;i<n;i++)
	   printf("%d ",t[i]);
	printf("\n");
	system("pause");
	return 0;
}
