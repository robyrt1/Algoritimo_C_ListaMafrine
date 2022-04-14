#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int dias=0, manha=20 , noite=11, cmPorDia=0,cmTotal=0;
	while(cmTotal != 1800){
		cmPorDia = manha - noite;
		cmTotal += cmPorDia; 
		
	}
	dias = cmTotal / cmPorDia - 1;
								  /*menos 1 pq no dia 199 ela terá chegado aos 18m ,
								    porém quando chega a noite ela descerá 11cm que fica c/1789cm; contudo 
									ela alcançou os 18m pela manhã*/
	printf("\nsubiu em %d dias",dias);
	
	return 0;
}
