#include<stdio.h>
int main(){
	int n,i,a;
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		a=i*n;
		printf("%d x %d = %d\n",i,n,a);
	}
	return 0;
}
