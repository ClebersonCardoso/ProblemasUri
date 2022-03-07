#include<stdio.h>
int main(){
	int number,hora;
	float salary,preco;
	scanf("%d %d %f", &number ,&hora ,&preco);
	salary=(hora*preco);
	printf("NUMBER = %d\n",number);
	printf("SALARY = $ %.2f\n",salary);
	return 0;
}
