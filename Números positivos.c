#include<stdio.h>
int main(){
	  float vet[6];
	  int i,k=0;
	 
	 for(i=0;i<6;i++){
	 	scanf("%f",&vet[i]);
	 	if(vet[i]>0){
	 		k++;
		 }
	 }
	 printf("%d valores positivos\n",k);
	 return 0;
}
