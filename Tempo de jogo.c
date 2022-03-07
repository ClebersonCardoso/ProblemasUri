#include<stdio.h>
int main(){
	int a,b,j;
	
	scanf("%d %d",&a,&b);
	
	if(a>b){
		j=24+(b-a);
	}else{
		j=(b-a);
	}
	if(a==b){
		j=24;
	}
	printf("O JOGO DUROU %d HORA(S)\n",j);
	return 0;
}
