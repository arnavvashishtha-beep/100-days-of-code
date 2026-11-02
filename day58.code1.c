#include <stdio.h>

int main()
{
    int n, i, j;
    int product;

    printf("Enter size: ");
    scanf("%d", &n);

    int nums[n];
    int answer[n];

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        product = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}