#include<stdio.h>
int main(){
	int a,alc=0,gas=0,die=0;
	
	while(a!=4){
		scanf("%d",&a);
		if(a==1){
			alc++;
		}
		if(a==2){
			gas++;
		}
		if(a==3){
			die++;
		}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alc);
	printf("Gasolina: %d\n",gas);
	printf("Diesel: %d\n",die);
}
