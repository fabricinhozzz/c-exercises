#include <stdio.h>

int toSum(int f, int s){
  int sum;
  sum = f+s;

  printf("%d\n", sum);

  return sum;
}

void main(){
  toSum(25,38);
}
