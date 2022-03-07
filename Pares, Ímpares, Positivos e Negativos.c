#include<stdio.h>
int main(){
	int i,vet[5],posi=0,nega=0,par=0,impa=0,zero=0;
	
	for(i=0;i<5;i++){
		scanf("%d",&vet[i]);
		if(vet[i]==0)
		zero++;
		if(vet[i]>0){
			posi++;
			if(vet[i]%2==0){
				par++;
			}else{
				impa++;
			}
		}else{
			if(vet[i]<0){
				nega++;
					if(vet[i]%2==0){
						par++;
					}else{
						impa++;
					}
			}
		}
	}
	par=par+zero;
	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",impa);
	printf("%d valor(es) positivo(s)\n",posi);
	printf("%d valor(es) negativo(s)\n",nega);
	return 0;
}
