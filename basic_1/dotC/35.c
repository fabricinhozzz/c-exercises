#include <stdio.h>

void checkOrder(int a, int b){
  if(a>b)
    printf("orderm decrescente\n");
  else if(a==b)
    printf("são números iguais\n");
  else
    printf("ordem crescente\n");
}

int main(){
  checkOrder(10,2);
  return 0;
}
