#include <stdio.h>

void printBetween(int value){
  int i;

  for(i=1; i<=100; i++){
    if(i%value==3)
      printf("%d\n",i);
  }
}

int main(){
  printBetween(25);
  return 0;
}
