#include<stdio.h>
 
  int main() {
  float area,r,circumference;
  const float pi=3.14;

  printf("Enter r here:");
  scanf("%f", &r);

  area= pi*r*r;
  printf("Area= %.2f \n", area);
  circumference=2*pi*r;
  printf("Circumference= %.2f \n", circumference);
  return 0;
  }