#include <stdio.h>
#include <math.h>
int main(){
	float x1,y1,x2,y2,dista,v1,v2,v3;
	printf("Digite as 4 coordenadas:\n");
	scanf("%f %f %f %f",&x1 ,&y1 ,&x2 ,&y2);
	v1=x2-x1;
	v2=y2-y1;
	v3=((v1*v1)+(v2*v2));
	dista=sqrt(v3);
	printf("A distancia e :%.4f\n",dista);
	return 0;
	}
