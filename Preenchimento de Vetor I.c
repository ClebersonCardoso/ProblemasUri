#include<stdio.h>
int main(){
	int vet[10],i,n;
	
	scanf("%d",&n);
	vet[0]=n;
	for(i=0;i<10;i++){
		vet[i+1]=vet[i]*2;
		printf("N[%d] = %d\n",i,vet[i]);
	}
	return 0;
}
