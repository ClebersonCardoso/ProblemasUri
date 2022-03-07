#include<stdio.h>
int main(){
	int x,y,i,aux,soma;
	while(x!=0 || y!=0){
		soma=0;
		scanf("%d %d",&x,&y);
		if(x==0 || x<0 || y==0 || y<0)break;
		
		if(x>y){
			aux=x;
			x=y;
			y=aux;
		}
		
		for(i=x;i<=y;i++){
			soma=soma+i;
			printf("%d ",i);
		}
		printf("Sum=%d\n",soma);
	}
	return 0;
}
