#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main(void){
    int matrix[MAX_ROWS][MAX_COLS];
    int transpose[MAX_COLS][MAX_ROWS];
    int rows, columns;
    int i, j;
    printf("enter number of rows and columns");
    scanf("%d %d", &rows, &columns);
    if(rows < 1 || rows > MAX_ROWS || columns < 1 || columns > MAX_COLS)
    {
       printf("invalid matrix size");
       return 1;
    }
    printf("enter the elements of matrix");
    for(i=0; i<rows; i++)
    {
       for(j=0; j<columns; j++)
       {
          scanf("%d", &matrix[i][j]);
       }
    }
    for(i=0; i<rows; i++)
    {
       for(j=0; j<columns; j++)
       {
          transpose[j][i] = matrix[i][j];
       }
    }
    printf("transpose of the matrix\n");
    for(i=0; i<rows; i++)
    {
       for(j=0; j<columns; j++)
       {
          printf("%4d", transpose[i][j]);
       }
       printf("\n");
    }
    return 0;
}
