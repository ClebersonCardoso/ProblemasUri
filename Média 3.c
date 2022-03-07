#include<stdio.h>
int main(){
	float a,b,c,d,media,ex,resultado;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	media=((a*2)+(b*3)+(c*4)+d)/10;
	printf("Media: %.1f\n",media);
	if(media>=7){
		printf("Aluno aprovado.\n");
	}else{
		if(media<5){
			printf("Aluno reprovado.\n");
		}
		}
		if(media>=5 && media<=6.9){
			printf("Aluno em exame.\n");
			scanf("%f",&ex);
			printf("Nota do exame: %.1f\n",ex);
			resultado=(media+ex)/2;
			if(resultado>=5){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n",resultado);
			
		}
	return 0;
}
