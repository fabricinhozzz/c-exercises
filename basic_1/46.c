#include <stdio.h>

void calculateSAgain(){
  float s;
  s=0;
  s+=1.0;
  s+=(3.0/2.0);
  s+=(5.0/4.0);
  s+=(7.0/8.0);

  printf("então toma fih: %.2f\n",s);
}

int main(){
  calculateSAgain();
  return 0;
}
