#include<stdio.h>
int main(){
	int n,i;
	
	scanf("%d",&n);
	int vet[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<n;i++){
		if(vet[i]%2==0 && vet[i]!=0){
			printf("EVEN ");
				if(vet[i]>0){
					printf("POSITIVE\n");
				}else{
					printf("NEGATIVE\n");
				}
		}else{
			if(vet[i]%2!=0){
			printf("ODD ");
					if(vet[i]>0){
					printf("POSITIVE\n");
				}else{
					printf("NEGATIVE\n");
				}
			}
		}
		if(vet[i]==0)
		printf("NULL\n");
	}
	return 0;
}
