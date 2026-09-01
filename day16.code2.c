#include<stdio.h>
int main (){
int n , digit , original , reverse =0 ;
printf(" enter n = ");
scanf("%d", &n);
original = n ; 
while ( n!=0 ){
            digit = n % 10;
            reverse = reverse*10 + digit;
            n = n / 10;
}
            printf("reverse of the number %d = %d\n " , original , reverse);
if ( original == reverse )
      printf ( " number is palindrome ");
else 
      printf( " number is not palindrome" );
return 0 ;
}