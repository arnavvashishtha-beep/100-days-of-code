#include <stdio.h>
int main(){
char alphabet;
printf("Enter the Alphabet = ");
scanf("%c",&alphabet);
if ( alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
      alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U' )
      printf("The alphabet is vowels\n");
else
      printf("The alphabet is consonants ");
return 0;
}