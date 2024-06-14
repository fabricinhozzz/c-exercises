#include <stdio.h>

void calc(int km, float fuel){
  float media;
  media = km/fuel;

  printf("consumo médio: %.2f\n", media);
}

int main(){
  calc(350,5);
  return 0;
}
