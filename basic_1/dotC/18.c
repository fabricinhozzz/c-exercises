#include <stdio.h>

void conver(int days){
  int y;
  int m;
  int d;

  y = days/365;
  m = (days%365)/30;
  d = days%30;

  printf("%d ano(s)\n%d mês(es)\n%d dia(s)\n", y,m,d);
}

int main(){
  conver(2535);
  return 0;
}
