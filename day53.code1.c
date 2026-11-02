#include <stdio.h>

int main()
{
    int n, i;
    int total = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for(i = 0; i < n; i++)
    {
        if(leftSum == total - leftSum - arr[i])
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    printf("%d", pivot);

    return 0;
}