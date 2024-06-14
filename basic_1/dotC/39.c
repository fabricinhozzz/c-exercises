#include <stdio.h>

void sumNotDivisible(int a, int b){
  int sum;
  int i;

  sum=0;

  for(i=a; i<=b; i++){
    if(i%17!=0)
      sum= sum+i;
  }

  printf("%d\n",sum);
}

int main(){
  sumNotDivisible(50,99);
  return 0;
}
