#include<stdio.h>
int main(){
	int i,j,menor,aux,vet[3],result[3];

	for(i=0;i<3;i++){
		scanf("%d",&vet[i]);
	}
	for(i=0;i<3;i++){
		result[i]=vet[i];
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(vet[i]<vet[j]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;	
			}
		}
	}
	for(i=0;i<3;i++){
		printf("%d\n",vet[i]);
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("%d\n",result[i]);
	}
	return 0;
}
