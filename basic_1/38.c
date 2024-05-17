#include <stdio.h>

void divisaum(float a, float b){
  float result;

  if(b!=0){
    result = a/b;
    printf("%.2f\n",result);
  } else{
    printf("divisão por 0 não rola\n");
  }
}

int main(){
  divisaum(25,5);
  return 0;
}
