#include<stdio.h>
int main(){
	int i,n,a,j=0;
	scanf("%d",&n);
	for(i=0;i<n/2;i++){
		j++;
		j++;
		a=j*j;
		printf("%d^2 = %d\n",j,a);
	}
	return 0;
}
