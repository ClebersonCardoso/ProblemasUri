#include<stdio.h>
int main(){
	int n,i;
	float a,b,c,result=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%f %f %f",&a,&b,&c);
		a=a*2;
		b=b*3;
		c=c*5;
		result=a+b+c;
		printf("%.1f\n",result/10);
	}
	return 0;
}
