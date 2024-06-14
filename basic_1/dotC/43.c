#include <stdio.h>

void printNums(int rows, int nums){
  int i;
  int i2;
  int counter;

  counter++;

  for(i=1; i<=rows; i++){
    for(i2=1; i2<=nums; i2++){
      printf("%d ",counter++);
    }

    printf("\n");
  }
}

int main(){
  printNums(5,6);
  return 0;
}
