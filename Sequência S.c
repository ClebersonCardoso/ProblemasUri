#include<stdio.h>
int main(){
	double s=0,soma=0,i;
	
	for(i=1;i<=100;i++){
		s=1/i;
		soma=soma+s;
	}
	printf("%.2lf\n",soma);
	return 0;
}
