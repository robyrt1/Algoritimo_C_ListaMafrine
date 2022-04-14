#include<stdio.h>
#include<stdlib.h>

int main(){
	int numb=1,intervalo1=0,intervalo2=0,intervalo3=0,intervalo4=0;
	while (numb > 0){
		printf("\nDigite um numero:");
		scanf("%d",&numb);
		
		if((numb > 0) && (numb <= 25)){
			intervalo1 ++;
		}else if((numb > 25) && (numb <= 50)){
			intervalo2++;}
			else if((numb >= 51) && (numb <= 75)){
				intervalo3++;}
				else if((numb >= 76) && (numb <= 100)){
					intervalo4++;}
	}
	
	printf("\nIntervalo de [0-25]: %d",intervalo1);
	printf("\nIntervalo de [26-50]: %d",intervalo2);
	printf("\nIntervalo de [51-75]: %d",intervalo3);
	printf("\nIntervalo de [76-100]: %d",intervalo4);
}
