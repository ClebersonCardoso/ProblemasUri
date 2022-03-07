#include<stdio.h>
int main(){
	int div=0;
	float result=0,soma=0,n;
	while((scanf("%f",&n)!=EOF) && n>=0){
			if(n>=0){
			div++;
			soma=soma+n;
		}
	}
	result=soma/div;
	printf("%.2f\n",result);
	return 0;
}
