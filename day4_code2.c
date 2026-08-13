//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
int  n , Sn;
printf("Enter the value of n = ");
scanf("%d",&n);
Sn = n*(n+1)/2;
printf("Sum of first n natural numbers = %d\n", Sn);
return 0 ;
}
