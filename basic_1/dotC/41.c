#include <stdio.h>

void printRows(int rows){
  int counter;
  int i;
  int ii;

  counter=1;

  for(i=0; i<rows; i++){
    for(ii=0; ii<3; ii++){
      printf("%d ",counter++);
    }

    printf("\n");
  }
}

int main(){
  printRows(5);
  return 0;
}
