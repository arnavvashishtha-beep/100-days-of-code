//Write a program to input time in seconds and convert it to hours : minutes: seconds format.
#include <stdio.h>
int main() {
float hours , minutes , seconds;
printf("Enter time in seconds : ");
scanf("%f", &seconds);
hours = seconds/3600;
minutes = seconds/60;
printf("%.2f seconds = %.2f minutes = %.2f hours",seconds,minutes,hours);
return 0;
}