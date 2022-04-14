#include<stdio.h>
#include<stdlib.h>

int main(){
	int numb,x=0,cont=0;
	do{
		printf("\nDigite um numero: ");
		scanf("%d",&numb);
		if(numb > 5){
			cont++;
		}
		printf("\n\nDeseja continuar\n1 - Sim\n0 - Nao\n");
		scanf("%d",&x);
	}while(x != 0);
	printf("\n\nForam digitado(s) %d numero maiores que 5",cont);
}
