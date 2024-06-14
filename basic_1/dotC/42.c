#include <stdio.h>

void printSqrtAndCube(int n){
  int i;
  int iSqrt;
  int iCube;

  for(i=1; i<=n; i++){
    iSqrt = i*i;
    iCube = i*i*i;

    printf("%d ",i);
    printf("%d ",iSqrt);
    printf("%d\n",iCube);
  }
}

int main(){
  printSqrtAndCube(5);
  return 0;
}
