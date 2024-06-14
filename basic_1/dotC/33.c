#include <stdio.h>

void findHighest(int nums[], int size){
  int i;
  int highest;
  int pos;

  highest=0;

  for(i=0; i<=size; i++){
    if(nums[i]>highest){
      highest=nums[i];
      pos=i+1;
    }
  }


  printf("highest: %d\n",highest);
  printf("posição: %d\n",pos);
}

int main(){
  findHighest((int[]){5,7,15,23,45},5);
  return 0;
}
