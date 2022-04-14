#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	int i, f_soma=0;
	
	
	for( i = 15; i <= 250; i++){
		if((i % 2 != 0)&&(i %3 ==0)){
		
		f_soma += i;
		//printf("\n%d",f_soma);
		} 
	}
	printf("\n\n\n Impares e multiplos de 3 : %d",f_soma);


	return 0;
}
/* vlr inicial = 15 (impar e mult  de 3) que soma com o proximo
 número que é impar e multiplo de 3 ... */
