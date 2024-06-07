#include <stdio.h>

void printTriple(){
  int arr[5];
  int length;
  int i;
  int value;

  arr[0]=5;
  length = sizeof(arr) / sizeof(arr[0]);
  value = arr[0];

  for(i=0; i<=length-1; i++){
    printf("arr[%d]: %d\n", i, value);
    value *= 3;
  }
}

int main(){
  printTriple();
  return 0;
}
