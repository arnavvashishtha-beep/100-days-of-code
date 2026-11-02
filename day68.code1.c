#include <stdio.h>

int main()
{
    int n, arr[100];
    int i;
    int actualSum = 0;
    int expectedSum;
    int missing;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        actualSum = actualSum + arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}