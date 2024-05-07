#include <stdio.h>

int toSeeProduct(int a, int b){
  int product;
  product = a*b;

  printf("produto: %d\n", product);

  return 0;
}

void main(){
  toSeeProduct(25,15);
}
