#include <stdio.h>

void swapVars(int x,int y){
  printf("antes da troca: %d e %d\n", x,y);

  x += y;
  y -= x;
  x -+ y;

  printf("depois da troca: %d e %d\n", x,y);
}

int main(){
  swapVars(0,1);
  return 0;
}
