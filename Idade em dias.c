#include<stdio.h>
int main(){
	int a,anos,meses,dias;
	scanf("%d",&a);
	anos=a/365;
	meses=((a-365*anos)/30);
	dias=((a-365*anos)-(30*meses));
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,dias);
	return 0;
}
