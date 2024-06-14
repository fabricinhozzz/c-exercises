#include <stdio.h>

void sumOdds(int a, int b, int c, int d, int e){
  int odds;

  if(a%2!=0)
    odds = a;
  if(b%2!=0)
    odds = odds+b;
  if(c%2!=0)
    odds = odds+c;
  if(d%2!=0)
    odds = odds+d;
  if(e%2!=0)
    odds = odds+e;

  printf("soma dos valores impares: %d\n",odds);
}

int main(){
  sumOdds(11,17,13,12,5);
  return 0;
}
