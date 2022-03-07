#include<stdio.h>
int main(){
	double valor=0,soma=0,c=0;
	int i,posi=0;
	for(i=1;i<=6;i++){
		scanf("%lf",&valor);
		if(valor>=0.0){
			posi++;
			soma=soma+valor;
		}
	}
	c=soma/posi;
	printf("%d valores postivos\n",posi);
	printf("%.1lf\n",c);
	return 0;
}
