#include <stdio.h>
int main(){
int year;
printf("Enter the year you wanna check is a leap year = ");
scanf("%d",&year);
if ( year%4==0)
      printf("The year is the leap year");
else
      printf("The year is not leap year");
return 0;
}