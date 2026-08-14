//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main() {
float s , c , p , r , t;
printf("Enter  principal : ");
scanf("%f", &p);
printf("Enter  rate : ");
scanf("%f", &r);
printf("Enter  time  : ");
scanf("%f", &t);
s = (p*r*t)/100;
c = p * pow((1 + r / 100), t) - p;
printf("Simple interest = %.2f\n",s);
printf("compound interest = %.2f\n",c);
return 0;
}