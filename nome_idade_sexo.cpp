#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char nome[30];
	char sexo[6];
	int idade = 0,x=0;
do{
	printf("\nSexo: ");
	scanf("%4s",&sexo);

	printf("\nDigite seu Nome: ");
	scanf("%30s",&nome);
	
	printf("\nDigite sua idade: ");
	scanf("%d",&idade);
	
	if(strcmp(sexo,"f")==0 || (strcmp(sexo,"F")==0) && (idade < 25)){
		//if(idade < 25)
			printf("\n%s - ACEITA!",nome);
	}else
		printf("\n%s - NAO ACEITA",nome);
	
	printf("\n\nDeseja continuar? :\n1 - sim\n0 - nao");
	scanf("%d",&x);
}while( x != 0);
}
