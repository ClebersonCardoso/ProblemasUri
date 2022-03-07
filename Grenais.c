#include<stdio.h>
int main(){
	int a,b,gremio=0,inter=0,empate=0,grenais=0,n;
	while(n!=2){ 
		scanf("%d %d",&a,&b);
		if(a>b){
			inter++;
		}
		if(b>a){
				gremio++;
		}if(a==b){
			empate++;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&n);
	}
	grenais=inter+gremio+empate;
	printf("%d grenais\n",grenais);
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",gremio);
	printf("Empates:%d\n",empate);
	if(inter>gremio){
		printf("Inter venceu mais\n");
	}else{
		if(inter<gremio){
			printf("Gremio venceu mais\n");
		}else
			printf("Nao houve vencedor\n");
	}
	return 0;
}
