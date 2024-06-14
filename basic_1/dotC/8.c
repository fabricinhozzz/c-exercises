#include <stdio.h>

void conversor(int days){
  int years;
  int weeks;
  int printDays;

  years = days/365;
  weeks = (days%365)/7;
  printDays = (days%365)%7;

  printf("years: %d\n",years);
  printf("weeks: %d\n",weeks);
  printf("days: %d\n",printDays);
}

void main(){
  conversor(1329);
}
