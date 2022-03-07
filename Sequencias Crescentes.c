#include<stdio.h>
int main(){
	int i,n;
	while(n!=0){
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			if(i<n){
				printf("%d ",i);
			}
			else{
				printf("%dultimo\n",i);
			}
		}
	}
}
