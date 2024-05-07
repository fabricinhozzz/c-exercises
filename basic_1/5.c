#include <stdio.h>

void main(){
  float height;
  float width;
  float per;
  float area;

  height = 7;
  width = 5;
  per = (2*width) + (2*height);
  area = width*height;

  printf("perimetro do retangulo: %.2f\n",per);
  printf("area do retangulo: %.2f\n",area);
}
