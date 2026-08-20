//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main() {
int a , b ,c ;
printf("Enter three side of triangle = ");
scanf("%d %d %d", &a , &b , &c);
if (a==b && b==c)
      printf(" It is the equilateral triangle ");
else if (a==b || b==c || a==c)
      printf(" It is the Isosceles triangle ");
else 
      printf(" It is the scalene triangle ");
return 0 ;
}