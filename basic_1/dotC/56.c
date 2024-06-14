#include <stdio.h>

void shiftL(int x){
  printf("%d\n", (x<<2));
}

int main(){
  shiftL(2);
  return 0;
}
