#include <stdio.h>

void averageMarks(float a, float b, float c, float d){
  float average;
  average = (a+b+c+d)/4;

  printf("average: %.2f\n",average);
}

int main(){
  averageMarks(10,15,20,25);
  return 0;
}
