#include <stdio.h>

void countNums(int nums[], int size){
  int positive;
  int negative;

  positive=0;
  negative=0;

  for(int i=0; i<size; i++){
    if(nums[i]>0)
      positive++;
    else if(nums[i]<0)
      negative++;
  }

  printf("positivos: %d\n",positive);
  printf("negativos: %d\n",negative);
}

int main(){
  countNums((int[]){5,-4,10,15,-1}, 5);
  return 0;
}
