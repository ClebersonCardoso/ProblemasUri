#include<stdio.h>
int main(){
	int vet[10],i,j,aux=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&vet[i]);
	}
	for(i=0;i<4;i++){
		for(j=9;j<(j-1);j--){
			aux=vet[i];
			vet[i]=vet[j];
			vet[j]=aux;
		}
	}
	for(i=9;i<=1;i--){
		printf("%d\n",vet[i]);
	}
}
