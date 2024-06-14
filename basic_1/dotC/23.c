#include <stdio.h>

void swap(float *x, float *y){
  float temp;

  temp = *x;
  *x = *y;
  *y = temp;
}

void triangle(float *a, float *b, float *c){
  if(*a>*b)
    swap(a,b);
  if(*a>*c)
    swap(a,c);
  if(*b>*c)
    swap(b,c);

  if(*a+*b>*c)
    printf("perimetro: %.2f\n",*a+*b+*c);
  else
    printf("tente outros numeros!\n");
}

int main(){
  float s1;
  float s2;
  float s3;

  s1=25;
  s2=15;
  s3=35;

  triangle(&s1,&s2,&s3);
  return 0;
}
