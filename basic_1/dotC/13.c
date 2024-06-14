#include <stdio.h>

void max(int a, int b, int c){
  if(a>b && a>c)
    printf("%d é maior que %d e %d\n", a, b, c);
  else if(b>a && b>c)
    printf("%d é maior que %d e %d\n",  b, a, c);
  else
    printf("%d é maior que %d e %d\n", c, a, b);
}

int main(){
  max(25,35,15);
  return 0;
}
