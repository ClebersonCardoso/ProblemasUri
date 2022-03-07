#include<stdio.h>
int main(){
	double a;
	int i,b;
	a=b=0;
	i=0;
	scanf("%lf",&a);
	printf("NOTAS:\n");
	for(i=0;a>=100;i++){
		a-=100;
	}
	printf("%d nota(s) de R$ 100.00\n",i);
	for(i=0;a>=50;i++){
		a-=50;
	}
	printf("%d nota(s) de R$ 50.00\n",i);
	for(i=0;a>=20;i++){
		a-=20;
	}
	printf("%d nota(s) de R$ 20.00\n",i);
	for(i=0;a>=10;i++){
		a-=10;
	}
	printf("%d nota(s) de R$ 10.00\n",i);
	for(i=0;a>=5;i++){
		a-=5;
	}
	printf("%d nota(s) de R$ 5.00\n",i);
	for(i=0;a>=2;i++){
		a-=2;
	}
	printf("%d nota(s) de R$ 2.00\n",i);
	printf("MOEDAS:\n");
	if(a>=1 && a<2){
		printf("1 moeda(s) de R$ 1.00\n");
		a-=1;
	}else{
		printf("0 moeda(s) de R$ 1.00\n");
	}if(a>=0.50 && a<1){
		printf("1 moeda(s) de R$ 0.50\n");
		a-=0.50;
	}else{
		printf("0 moeda(s) de R$ 0.50\n");
	}if(a>=0.25 && a<0.50){
		printf("1 moeda(s) de R$ 0.25\n");
		a-=0.25;
	}else{
		printf("0 moeda(s) de R$ 0.25\n");
	}
	for(i=0;a>=0.10;i++){
		a-=0.10;
	}
	printf("%d moeda(s) de R$ 0.10\n",i);
	for(i=0;a>=0.05;i++){
		a-=0.05;	
		}
	printf("%d moeda(s) de R$ 0.05\n",i);
	for(i=0;a>=0.01;i++){
		a-=0.01;
		b++;
	}
	printf("%d moeda(s) de R$ 0.01\n",b);
	return 0;
}
