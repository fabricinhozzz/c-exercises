#include <stdio.h>

void sumConseqOdds(int a, int b){
  int temp;
  int i;
  int sum;

  sum=0;

  if(a>b){
    temp=b;
    b=a;
    a=temp;
  }

  for(i=a; i<b; i++){
    if(i%2!=0){
      printf("%d\n",i);
      sum = sum+i;
    }
  }

  printf("sum = %d\n",sum);
}

int main(){
  sumConseqOdds(10,2);
  return 0;
}
