#include <stdio.h>
int main (){
	int j,r,p,i,pi,ij,maior;
	scanf("%d %d",&j,&r);
	p=j*r;
	int P[p];
		for (i=0;i<p;i++){
			P[i]=0;
		}
		for(i=0;i<p;i++){
			scanf("%d",&P[i]);
		}
	int J[j];
		for (i=0;i<j;i++){
			J[i]=i+0;
		}
		for (i=0;i<j;i++){
			J[i]=i+1;
		}
		int soma[j];
		for (i=0;i<j;i++){
			soma[i]=0;
		}
		for (ij=0;ij<j;ij++){
			for(pi=0;pi<(r-1);pi++){
				soma[ij]=P[ij]+P[ij+j];
			}
		}
		maior=soma[0];
		for(i=0;i<j;i++){
			if(soma[i]>=maior){
			maior=j[i];
			}
		}
		printf("%d",maior);
		return 0;
	}
		
}
