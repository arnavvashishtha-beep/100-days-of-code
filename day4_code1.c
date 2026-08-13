//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
int a , b ,c;
printf("enter a number=");
scanf("%d",&a);
printf("a=%d\n",a);
printf("enter a number=");
scanf("%d",&b);
printf("b=%d\n",b);
// Arithmetic operations to swap values
a = a + b;
b = a - b;
a = a - b;
printf("a = %d, b = %d\n", a, b);
return 0; 
}