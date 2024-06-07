#include <stdio.h>

//simple interest == juros simples
//p == principal amount, valor inicial
//r == taxa anual de interesse, em porcentagem
//t == tempo pelo qual o dinheiro é emprestado
//ou investido, em anos

void simpleInterest(int p, int r, int t){
  int simInt;
  simInt = (p*r*t)/100;

  printf("%d\n",simInt);
}

int main(){
  simpleInterest(10000,10,12);
  return 0;
}
