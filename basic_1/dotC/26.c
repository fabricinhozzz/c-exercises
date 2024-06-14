#include <stdio.h>

void printEven(){
  int f;
  f=0;

  while(f<=50){
    f++;

    if(f%2==0)
      printf("%d ",f);
  }
}

int main(){
  printEven();
  return 0;
}
