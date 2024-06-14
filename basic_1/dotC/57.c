#include <stdio.h>

void reverseNums(int x){
  int reverse;
  int remainder;

  reverse = 0;

  printf("nums recebidos: %d\n", x);

  while(x != 0){
    remainder = x % 10;
    reverse = reverse*10+remainder;
    x /= 10;
  }

  printf("nums reversos: %d\n", reverse);
}

int main(){
  reverseNums(123);
  return 0;
}
