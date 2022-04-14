#include<stdio.h>
#include<stdlib.h>
float f_result(float result_preco){
	return result_preco;
}

float f_area(float comprimentro,float largura,float area){
	area = comprimentro * largura;
	return area;
}

float f_preco(float area,float preco_metro,float result_preco){
	result_preco = area * preco_metro;
	return result_preco;
}
int main(){
	float result,comprimento,largura,result_preco=0,preco_metro = 2000.00,area=0;
	int c=0;
	do{
		printf("\n|------Construcao de casa------|\nInforme o comprimentro da casa que deseja (em metros): ");
		scanf("%f",&comprimento);
		printf("\nInforme a largura da casa (em metros): ");
		scanf("%f",&largura);
		
		area = f_area(comprimento,largura,area);
		
		result_preco = f_preco(area, preco_metro,result_preco);
		
		printf("\nValor da construcao: %.2f",f_result(result_preco));
		
		printf("\n\nFazer um novo Orcamento\n1 - sim\n0 - nao");
	}while(c != 0);
	
}
