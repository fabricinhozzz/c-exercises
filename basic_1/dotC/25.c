#include <stdio.h>

void months(int m){
  if(m==1)
    printf("janeiro\n");
  else if(m==2)
    printf("fevereiro\n");
  else if(m==3)
    printf("março\n");
  else if(m==4)
    printf("abril\n");
  else if(m==5)
    printf("maio\n");
  else if(m==6)
    printf("junho\n");
  else if(m==7)
    printf("julho\n");
  else if(m==8)
    printf("agosto\n");
  else if(m==9)
    printf("setembro\n");
  else if(m==10)
    printf("outubro\n");
  else if(m==11)
    printf("novembro\n");
  else if(m==12)
    printf("dezembro\n");
}

int main(){
  months(12);
  return 0;
}
