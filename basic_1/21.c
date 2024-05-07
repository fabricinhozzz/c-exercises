#include <stdio.h>

void checkRange(int a){

  if(a>=0 && a<=20)
    printf("range[0,20]\n");
  else if(a>=21 && a<=40)
    printf("range[21,40]\n");
  else if(a>=41 && a<=60)
    printf("range[41,60]\n");
  else if(a>=61 && a<=80)
    printf("range[61,80]\n");
  else
    printf("fora de range\n");
}

int main(){
  checkRange(15);
  return 0;
}
