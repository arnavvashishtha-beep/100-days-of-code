#include <stdio.h>

int main()
{
    int day, year;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/04/%d", &day, &year);

    printf("%02d-Apr-%04d", day, year);

    return 0;
}