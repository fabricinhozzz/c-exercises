#include <stdio.h>

void main(){
  float radius;
  float per;
  float area;

  radius = 5;
  per = (2*3.14) * radius;
  area = 3.14 * (radius*radius);

  printf("perimetro do circulo: %.2f\n",per);
  printf("area do circulo: %.2f\n",area);
}
