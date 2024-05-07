#include <stdio.h>

void main(){
  int a;
  int b;
  long ax;
  short s;
  float x;
  double dx;
  char c;
  unsigned long ux;

  a=125;
  b=12345;
  ax=1234567890;
  s=4043;
  x=2.13459;
  dx=1.1415927;
  c='W';
  ux=2541567890;

  printf("a+c= %d\n", a+c);
  printf("x+c= %f\n", x+c);
  printf("dx+x= %f\n", dx+x);
  printf("dx+ax= %f\n", dx+ax);
  printf("a+x= %f\n", a+x);
  printf("s+b= %d\n", s+b);
  printf("ax+b= %ld\n", ax+b);
  printf("s+c= %d\n", s+c);
  printf("ax+c= %ld\n", ax+c);
  printf("ax+ux= %ld\n", ax+ux);
}
