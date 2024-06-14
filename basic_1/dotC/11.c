#include <stdio.h>

//tendi nada desse exercicio

int average(double w1, double c1, double w2, double c2){
  printf("peso do item 1: %.2lf\nnum do item 1: %.2lf\n", w1, c1);
  printf("peso do item 2: %.2lf\nnum do item 2: %.2lf\n", w2, c2);

  double result;
  result = ((w1*c1) + (w2*c2)) / (c1+c2);

  printf("média: %.2lf\n", result);

  return 0;
}

void main(){
  average(15,5,25,4);
}
