#include <stdio.h>

void changePlaces(int arr[], int size){
  int temp;
  int i;
  int j;

  for(i=0, j=size-1; i<j; i++, j--){
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  for(i=0; i<size; i++){
    printf("arr[%d]: %d\n", i,arr[i]);
  }
}

int main(){
  changePlaces((int[]){15,20,25,30,35},5);
  return 0;
}
