#include <stdio.h>
#include <conio.h>

int main()
{
    int array[15][15], x, y, res[3][150], c = 1, row, col;
    printf("Enter the Number of Rows in Matrix:  ");
    scanf ("%d", &row);

    printf("Enter the Number of Columns in Matrix:  ");
    scanf ("%d", &col);

    printf("Enter the Elements of the Matrix:\n");
    
    for (x = 1; x <= row; x++)
    {
        for (y = 1; y <= col; y++)
        {
            printf("Element [%d][%d] :  ", x, y);
            scanf("%d", &array[x][y]);
        }
    }
    
    for (x = 1; x <= row; x++)
    {
        for(y = 1; y <= col; y++)
        {
            if(array[x][y] != 0)
            { 
                res[1][c] = x;
                res[2][c] = y;
                res[3][c] = array[x][y];
                c++;
            }
        }
    }
    
    printf("Sparse Matrix:\n");
    
    for (x = 1; x <= 3; x++)
    {
        for(y = 1; y < c; y++)
        {
            printf("%d ", res[x][y]);
        }
        printf("\n");
    }

    return 0;
}