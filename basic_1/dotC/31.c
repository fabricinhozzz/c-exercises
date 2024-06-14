#include <stdio.h>

void checkNum(int value){

  if(value>0){
    printf("positivo e ");

    if(value%2==0)
      printf("par\n");
    else
      printf("impar\n");

  } else if(value<0){
    printf("negativo e ");

    if(value%2==0)
      printf("par\n");
    else
      printf("impar\n");
  }
}

int main(){
  checkNum(13);
  return 0;
}
