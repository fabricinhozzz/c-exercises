#include <stdio.h>

void idAndSalary(char id[], int hr, int salaryPerHr){
  float salary;
  salary = hr*salaryPerHr;

  printf("id: %s\nsalary: R$%.2f\n", id, salary);
}

int main(){
  idAndSalary("0342",8,1500);
  return 0;
}
