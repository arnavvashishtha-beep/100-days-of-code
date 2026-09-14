//Q71: Read and print a matrix.
#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main(void)
{
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, columns;
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    if (rows < 1 || rows > MAX_ROWS ||
        columns < 1 || columns > MAX_COLS)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }
    printf("Enter %d elements:\n", rows * columns);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe matrix is:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
