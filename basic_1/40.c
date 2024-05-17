#include <stdio.h>

void findIntBetween(int a, int b){
  int i;

  for(i=a; i<=b; i++){
    if(i%7==2 || i%7==3)
      printf("%d\n",i);
  }
}

int main(){
  findIntBetween(25,45);
  return 0;
}
