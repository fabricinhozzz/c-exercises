#include <stdio.h>

void main(){
  #if defined __STDC_VERSION__
    long v = __STDC_VERSION__;

    if(v==199901)
      printf("C99\n");

    if(v==201112)
      printf("C11\n");

    if(v==201710)
      printf("C18\n");
  #else
    printf("C90\n");
  #endif
}
