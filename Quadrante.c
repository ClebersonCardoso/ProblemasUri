#include<stdio.h>
int main(){
	int i,p1,p2;
	while(scanf("%d %d",&p1,&p2)!=EOF){
		if(p1==0 || p2==0){
			return EOF;
		}
		if(p1>0){
			if(p2>0){
				printf("primeiro\n");
			}else{
				printf("quarto\n");
			}
		}else{
			if(p2<0){
				printf("terceiro\n");
			}else{
				printf("segundo\n");
			}
		}
	}
	return 0;
}
