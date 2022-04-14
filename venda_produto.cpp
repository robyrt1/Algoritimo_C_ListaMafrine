#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct cadastro{
	char descricao[50];
	float preco;
}Produto;

int main (){
	int op,c=0,qtd;
	float p_1,p_2,p_3;//amrazena o valor total de cada produto(p1,p2 e p3) 
	float vlrFinal,vlrReceber,troco;
	
	Produto p1;
	p1.preco = 11.50;
	strcpy(p1.descricao,"SH S LINE BRILHANTE");
	
	Produto p2;
	p2.preco = 15.50;
	strcpy(p2.descricao,"COND S LINE BRILHANTE");
	
	Produto p3;
	p3.preco = 22.50;
	strcpy(p3.descricao,"KIT COND + SH S LINE");
	
	printf("\n|-----------------------------------|");
	printf("\n|1 - Descicao - %s",p1.descricao);
	printf("\n|    Preco - %.2f",p1.preco);
	printf("\n|-----------------------------------|");
	printf("\n|2 - Descicao - %s",p2.descricao);
	printf("\n|    Preco - %.2f",p2.preco);
	printf("\n|-----------------------------------|");
	printf("\n|3 - Descicao - %s",p3.descricao);
	printf("\n|    Preco - %.2f",p3.preco);
	
	do{
		printf("\n\nQual produdo eh de seu interesse:  ");
	    scanf("%d",&op);
	    switch(op){
	    	case 1:
	    		printf("\nQuantidade: ");
	    		scanf("%d",&qtd);
	    		p_1 = qtd * p1.preco;
	    		break;
	    	case 2:
	    		printf("\nQuantidade: ");
	    		scanf("%d",&qtd);
	    		p_2 = qtd * p2.preco;
	    		break;
	    	case 3:
	    		printf("\nQuantidade: ");
	    		scanf("%d",&qtd);
	    		p_3 = qtd * p3.preco;
	    		break;
	    	default:
	    		break;
  	
		}	
			vlrFinal = p_1+p_2+p_3;
	    	printf("\n\nDeseja continuar comprando:\n1 - SIM\n0 - NAO\n");
	    	scanf("%d",&c);
	}while(c != 0);
	
	printf("\n\nTotal da compra: %.2f",vlrFinal);
	printf("\nValor a Receber: ");
	scanf("%f",&vlrReceber);
	
	if(vlrReceber > vlrFinal){
		troco = vlrReceber - vlrFinal;
		printf("\nTroco : %.2f",troco);
	}
}
