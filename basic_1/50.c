#include <stdio.h>

void lessThanFive(int arr[], int size){
  int i;

  for(i=0; i<size; i++){
    if(arr[i]<5)
      printf("arr[%d]: %d\n", i,arr[i]);
  }
}

int main(){
  lessThanFive((int[]){15,25,4,35,40},5);
  return 0;
}
