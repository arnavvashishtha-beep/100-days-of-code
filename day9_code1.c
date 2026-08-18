#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, d;
    float root1, root2;
    printf("enter a");
    scanf("%f", &a);
    printf("enter b");
    scanf("%f", &b);
    printf("enter c");
    scanf("%f", &c);
    d = b * b - 4 * a * c;

    if (d > 0)
    {
       root1 = (-b + sqrt(d)) / (2 * a);
       root2 = (-b - sqrt(d)) / (2 * a);
       printf("two real and different roots\n");
       printf("root1 is %.2f\n", root1);
       printf("root2 is %.2f\n", root2);
    }
    else if (d == 0)
    {
         root1 = -b / (2 * a);
         printf("two real and equal rootd\n");
         printf("root1 is %.2f\n", root1);
    }
    else
    {
         printf("complex root");
    }
    return 0;
}
       

    