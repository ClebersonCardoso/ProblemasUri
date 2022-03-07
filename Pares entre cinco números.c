#include<stdio.h>
int main(){
	int vet[5];
	int i,k=0;
	
	for(i=0;i<5;i++){
		scanf("%d",&vet[i]);
		if(vet[i]%2==0)
		k++;
	}
	printf("%d valores pares\n",k);
	return 0;
}
