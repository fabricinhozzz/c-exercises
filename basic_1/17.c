#include <stdio.h>

void conver(int secs){
  int hh;
  int mm;
  int ss;

  hh = secs/3600;
  mm = (secs/60)%60;
  ss = secs%60;

  printf("HH:MM:SS - %d:%d:%d\n", hh,mm,ss);
}

int main(){
  conver(25300);
  return 0;
}
