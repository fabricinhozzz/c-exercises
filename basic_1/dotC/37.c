#include <stdio.h>

void readCoordinates(int x, int y){
  if(x>0 && y>0)
    printf("quadrante I (+,+)\n");
  else if(x>0 && y<0)
    printf("quadrante IV (+,-)\n");
  else if(x<0 && y<0)
    printf("quadrante III (-,-)\n");
  else if(x<0 && y>0)
    printf("quadrante II (-,+)\n");
}

int main(){
  readCoordinates(25,15);
  return 0;
}
