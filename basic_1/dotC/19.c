#include <stdio.h>

void testValues(int a, int b, int c, int d){
  if(a%2==0 && b>0 && c>0 && d>0 && b>c && d>a && (c+d)>(a+b))
    printf("valores corretos\n");
  else
    printf("valores incorretos\n");
}

int main(){
  testValues(25,35,15,46);
  return 0;
}
