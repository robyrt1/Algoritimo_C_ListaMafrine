#include <stdio.h>
int main() {
  //Robert Pinto Mendes
  float peso,altura,imc;
  int idade;
  printf("\nDigite sua idade: ");
  scanf("%d",&idade);
  if(idade >= 18){
    printf("\nDigite seu peso: ");
    scanf("%f",&peso);
    printf("\nDigite sua altura(m)");
    scanf("%f",&altura);
    imc = peso / (altura * altura);
    if(imc < 18.5){
      printf("\nAbaixo do peso");
    }else if((imc > 18.5)&&(imc <25)){
      printf("\nPesoNormal");
    }else if((imc > 25)&&(imc < 30)){
      printf("\nAcima do Peso");
    }else{
      printf("\nObeso");
    }
    
  }
    return 0;
}
