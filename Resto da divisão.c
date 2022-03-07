#include<stdio.h>
int main(){
	int x,y,i,aux;
	
	scanf("%d %d",&x,&y);
	if(x>y){
		aux=x;
		x=y;
		y=aux;
	}
	x++;
	for(i=x;i<y;i++){
		if(i%5==2 || i%5==3){
			printf("%d\n",i);
		}
	}
	return 0;
}
