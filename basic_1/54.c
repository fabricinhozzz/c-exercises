#include <stdio.h>

void cmToInches(float cm){
  float inches;
  inches = cm/2.54;

  printf("%.2f cm == %.2f inches\n", cm,inches);
}

int main(){
  cmToInches(500);
  return 0;
}
