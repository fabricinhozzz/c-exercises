#include <stdio.h>

void printArrays(int arr[], int size){
  int i;

  for(i=0; i<size; i++){
    printf("arr[%d]: %d\n", i, arr[i]);
  }
}

int main(){
  printArrays((int[]){25,45,35,65,15},5);
  return 0;
}
