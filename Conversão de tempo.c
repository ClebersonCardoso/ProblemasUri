#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d",&a);
	b=a/3600;
	c=(a-(b*3600))/60;
	d=(a-(3600*b)-(c*60));
	printf("%d:%d:%d\n",b,c,d);
	return 0;
}
