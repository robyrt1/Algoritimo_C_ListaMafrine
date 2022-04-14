#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*2) Questão
Criar um algoritmo para ler a sigla de um estado de uma pessoa e imprimir uma
das mensagens:
- Carioca; - Paulista; - Amazonense; - outros estados. */
int main(){
	char uf[2];
	int x = 0;
	do{
		printf("\nDigite a UF (ex: AM): ");
		scanf("%2s",&uf);	
		if(strcmp(uf,"AM") == 0)
			printf("\nAmazonense");
			else if(strcmp(uf,"RJ") == 0)
				printf("\nCarioca");
				else if(strcmp(uf,"SP") == 0)
					printf("\nPaulista");
					else 
						printf("\nOutros estados");
		printf("\n\nDeseja continuar? :\n1 - sim\n0 - nao");
		scanf("%d",&x);
	}while(x != 0);	
}
