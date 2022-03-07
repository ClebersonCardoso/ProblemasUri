#include<stdio.h>
int main(){
	int a=0;
	float soma,result,n;
	while(a!=2){
		scanf("%f",&n);
		if(n>=0 && n<=10){
			a++;
			soma=soma+n;
		}else{
			printf("nota invalida\n");
		}
	}
	result=soma/2;
	printf("media = %.2f\n",result);
	return 0;
}
