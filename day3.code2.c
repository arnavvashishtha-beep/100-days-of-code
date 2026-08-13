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
//swapping numbers a and b
c=a;
a=b;
b=c;
printf("a=%d\n",a);
printf("b=%d",b);
return 0 ;
}
