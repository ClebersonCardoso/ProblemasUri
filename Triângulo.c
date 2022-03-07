#include<stdio.h>
int z;
float trian(float a,float b,float c){
		if(((b-c)<a) && (a<(b+c))){
			z++;
		}
		if(((a-c)<b) && (b<(a+c))){
			z++;
		}
		if(((a-b)<c)&& (c<(a+b))){
			z++;
		}
	}
int main(){
	float a,b,c,p,area;
	scanf("%f %f %f",&a,&b,&c);
	trian(a,b,c);
	if(z==3){
		p=a+b+c;
		printf("Perimetro = %.1f\n",p);
	}
	else{
		area=((a+b)*c)/2;
		printf("Area = %.1f\n",area);
	}
	return 0;
}
