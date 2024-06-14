#include <stdio.h>

void sumOdds(int nums[], int size){
  int sum;
  int i;

  sum = 0;

  for(i=0; i<=size; i++){
    if(nums[i]%2>0)
      sum = sum + nums[i];
  }

  printf("soma dos valores impares: %d\n",sum);
}

int main(){
  sumOdds((int[]){5,7,9,10,13},5);
  return 0;
}
