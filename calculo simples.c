#include <stdio.h>
int main(){
	int np1,np2,q1,q2;
	double preco1,preco2,v1,v2,valor;
	scanf("%d %d %lf %d %d %lf",&np1 ,&q1 ,&preco1 ,&np2 ,&q2 ,&preco2);
	
	v1=q1*preco1;
	v2=q2*preco2;
	
	valor=v1+v2;
	
	printf("VALOR A PAGAR: R$ %.2lf\n",valor);
	
	return 0;
	
}
