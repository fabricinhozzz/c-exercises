#include <stdio.h>

void calculateS(){
  float s;
  int i;

  s=0;

  for(i=1; i<=50; i++){
    s = s+(1.0/i);
  }

  printf("s: %.2f\n",s);
}

int main(){
  calculateS();
  return 0;
}
