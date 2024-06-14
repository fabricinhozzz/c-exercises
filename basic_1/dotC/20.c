#include <stdio.h>
#include <math.h>

void rootsBhask(float a, float b, float c){
  float ns;
  ns = (b*b) - (4*(a)*(c));

  if(ns>0 && a!=0){
    float x;
    float y;

    ns= sqrt(ns);
    x = (-b+ns)/(2*a);
    y = (-b-ns)/(2*a);

    printf("raiz 1: %.3f\n",x);
    printf("raiz 2: %.3f\n",y);
  }
}

int main(){
  rootsBhask(25,35,12);
  return 0;
}
