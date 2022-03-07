#include<stdio.h>
int main(){
	int a,i;
	scanf("%d",&a);
	printf("%d\n",a);
	for (i=0;a>=100;i++){
		a=a-100;
	}
	printf("%d nota(s) de R$ 100,00\n",i);
	if (a>=50 && a<100){
		a=a-50;
		printf("1 nota(s) de R$ 50,00\n");
		}
		else{
			printf("0 nota(s) de R$ 50,00\n");
		}
	for (i=0;a>=20 && a<50;i++){
		a=a-20;
	}
	printf("%d nota(s) de R$ 20,00\n",i);
	if (a>=10 && a<20){
		a=a-10;
		printf("1 nota(s) de R$ 10,00\n");
		}
		else{
			printf("0 nota(s) de R$ 10,00\n");
		}
	if (a>=5 && a<10){
	a=a-5;
	printf("1 nota(s) de R$ 5,00\n");
		}
		else{
			printf("0 nota(s) de R$ 5,00\n");		
		}	
	if (a>=2 && a<5){
	a=a-2;
	printf("1 nota(s) de R$ 2,00\n");
		}
		else{
			printf("0 nota(s) de R$ 2,00\n");		
		}	
	if (a>0 && a<2){
	a=a-1;
	printf("1 nota(s) de R$ 1,00\n");
		}
	else{
		printf("0 nota(s) de R$ 1,00\n");		
	}	
	
	return 0;
}
