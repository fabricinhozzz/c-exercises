#include <stdio.h>
#include <math.h>

void squareEven(int value){
  int square;
  int i;

  for(i=1; i<=value; i++){
    if(i%2==0)
      printf("%d^2 = %.2lf\n",i,pow(i,2));
  }
}

int main(){
  squareEven(4);
  return 0;
}
