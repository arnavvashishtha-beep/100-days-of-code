#include <stdio.h>

int main()
{
    int n, arr[100];
    int seen[1000] = {0};
    int i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        if(seen[arr[i]] == 1)
        {
            printf("%d", arr[i]);
            return 0;
        }

        seen[arr[i]] = 1;
    }

    return 0;
}