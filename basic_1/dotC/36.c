#include <stdio.h>

void checkPass(int num){
  int password;
  password=1234;

  do{
    printf("acerte a senha\n");
  } while(num!=password);

  printf("oloko, acertou\n");
}

int main(){
  checkPass(1234);
  return 0;
}
