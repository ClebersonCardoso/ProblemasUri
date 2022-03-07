#include<stdio.h>
int main(){
	int i,n,a,c;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d ",i);
		a=i*i;
		printf("%d ",a);
		c=a*i;
		printf("%d\n",c);
	}
	return 0;
}
