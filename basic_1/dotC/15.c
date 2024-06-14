#include <stdio.h>
#include <math.h>

void distance(int x1, int y1, int x2, int y2){
  int calc;
  float result;

  calc = pow((x1-x2),2) + pow((y1-y2),2);
  result = sqrt(calc);

  printf("a distancia entre os pontos ditos é de: %.3f\n",result);
}

int main(){
  distance(25,15,35,10);
  return 0;
}
