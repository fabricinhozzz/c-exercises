#include <stdio.h>

void findAllDivs(int x){
  int i;

  for(i=1; i<=x; i++){
    if(x%i==0)
      printf("%d\n",i);
  }
}

int main(){
  findAllDivs(45);
  return 0;
}
