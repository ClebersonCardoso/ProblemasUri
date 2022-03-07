#include<stdio.h>
int main(){
	int a,b;
	float total;
	float vet[5]={4.00,4.50,5.00,2.00,1.50};
	scanf("%d %d",&a,&b);
		total=vet[a-1]*b;
		printf("Total: R$ %.2f\n",total);
	return 0;
}
