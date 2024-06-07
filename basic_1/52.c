#include <stdio.h>

void findSmallest(int arr[], int size){
  int i;
  int j;
  int loc_res;
  int res;

  for(i=0, j=1; i<size; i++, j++){
    if(arr[i]<arr[j]){
      loc_res = i;
      res = arr[i];
    }
  }

  printf("arr[%d]: %d\n", loc_res,res);
}

int main(){
  findSmallest((int[]){25,35,20,15,45},5);
  return 0;
}
