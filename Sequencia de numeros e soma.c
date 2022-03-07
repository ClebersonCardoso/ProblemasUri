#include<stdio.h>
int main(){
	int i,m,n,j=0;
	scanf("%d %d",&m,&n);
	if(m>n){
		int vet[m];
		for(i=0;i<m;i++){
			if(i==0)
			vet[i]=n;
			printf("i=0 %d ",vet[i]);
			}else{
				j++;
				vet[i]=vet[i-1]+j;
				printf("%d ",vet[i]);
			}
		}
	}
}
