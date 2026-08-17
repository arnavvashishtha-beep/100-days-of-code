#include <stdio.h>
int main(){
char ch;
printf("Enter a character = ");
scanf("%c",&ch);
if ( ch>='A' && ch<='Z')
     printf("Uppercase Alphabet");
else if ( ch>='A' && ch<='Z')
             printf("Lowercase Alphabet");
else if ( ch>=0 && ch<=9)
             printf("Digit");
else 
     printf("It is a special character");
return 0;
}

