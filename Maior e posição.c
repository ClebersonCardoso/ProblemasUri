#include<stdio.h>
int main(){
	int vet[100],i,maior=0,posi=0;
	
	for(i=0;i<100;i++){
		scanf("%d",&vet[i]);
		if(vet[i]>=maior){
			maior=vet[i];
			posi=i+1;
		}
	}
	printf("%d\n",maior);
	printf("%d\n",posi);
	return 0;
}
