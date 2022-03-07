#include<stdio.h>
int main(){
	int i,a,b,n,aux=0;
	a=0;
	b=1;
	
	scanf("%d",&n);
	printf("0 1");
	
	
	for(i=1;i<=(n-2);i++){
		aux=a+b;
		a=b;
		b=aux;
		if(i==(n-2)){
			printf(" %d\n",aux);
		}else	
			printf(" %d",aux);	
	}
	return 0;
}
