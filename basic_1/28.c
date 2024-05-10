#include <stdio.h>

void countPositive(int nums[], int size){
  int positives;
  int totalPositives;
  int average;
  int i;

  totalPositives = 0;

  for(i=0; i<=size; i++){
    if(nums[i]>0){
      totalPositives = totalPositives+nums[i];
      positives++;
    }
  }

    average = totalPositives/positives;

  printf("valores positivos: %d\n",positives);
  printf("valor médio entre os positivos: %d\n",average);
}

int main(){
  countPositive((int[]){5,8,10,-5,25},5);
  return 0;
}
