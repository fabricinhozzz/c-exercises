#include <stdio.h>

void checkMultiplied(int a, int b){
  if(a%b==0)
    printf("nop\n");
  else
    printf("multiplicado!\n");
}

int main(){
  checkMultiplied(5,15);
  return 0;
}
