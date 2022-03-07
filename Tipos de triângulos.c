#include<stdio.h>
int main(){
	float a,b,c,aux,vet[3];
	int i,j;
	
	for(i=0;i<3;i++){
		scanf("%f",&vet[i]);
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
	a=vet[2];
	b=vet[1];
	c=vet[0];
	if(a>=(b+c)){
		printf("NAO FORMA TRIANGULO\n");
	}else{
		if((a*a)==(b*b)+(c*c)){
			printf("TRIANGULO RETANGULO\n");
		}else{
			if((a*a)>(b*b)+(c*c)){
			printf("TRIANGULO OBTUSANGULO\n");
		}else{
			if((a*a)<(b*b)+(c*c)){
			printf("TRIANGULO ACUTANGULO\n");
			}	
		}
		}
	}
	if(a==b && b==c){
		printf("TRIANGULO EQUILATERO\n");
	}else{
	if(a==b || b==c || a==c){
		printf("TRIANGULO ISOSCELES\n");
	}
	}
	return 0;
}
