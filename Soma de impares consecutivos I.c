#include<stdio.h>
int main(){
	int x,y,i,aux,soma=0;
	scanf("%d %d",&x,&y);
	if(x>y){
		aux=x;
		x=y;
		y=aux;
	}
	x++;
	for(i=x;i<y;i++){
		if(i%2!=0){
			soma=soma+i;
		}
	}
	printf("%d\n",soma);
	return 0;
}
