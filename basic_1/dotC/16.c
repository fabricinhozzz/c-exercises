#include <stdio.h>

void smallestAmount(int num){
  printf("o tanto de notas de 100: %d\n", num/100);
  num = num%100;

  printf("o tanto de notas de 50: %d\n", num/50);
  num = num%50;

  printf("o tanto de notas de 20: %d\n", num/20);
  num = num%20;

  printf("o tanto de notas de 10: %d\n", num/10);
  num = num%10;

  printf("o tanto de notas de 5: %d\n", num/5);
  num = num%5;

  printf("o tanto de notas de 2: %d\n", num/2);
  num = num%2;

  printf("o tanto de notas de 1: %d\n", num/1);
  num = num%1;
}

int main(){
  smallestAmount(375);
  return 0;
}
