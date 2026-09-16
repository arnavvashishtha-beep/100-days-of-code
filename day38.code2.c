//Check if a matrix is symmetric.
#include <stdio.h>
#define MAX_SIZE 10
int main(void)
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;
    int i, j;
    int isSymmetric = 1;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    if (size < 1 || size > MAX_SIZE)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }
    printf("Enter the matrix elements:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0)
        {
            break;
        }
    }
    if (isSymmetric == 1)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}