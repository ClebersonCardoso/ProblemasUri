#include<stdio.h>
int main(){
	int a,b,c,d,i,soma,som,resto;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	soma=c+d;
	som=a+b;
	resto=a%2;
	if(b>c && d>a && soma>som && c>0 && d>0 && resto==0){
		printf("Valores aceitos\n");
	}else{
		printf("Valores nao aceitos\n");
	}
}
