#include <stdio.h>

int main()
{
    int x, y, a[2][2], b[2][2], c[2][2], p = 0, z;

    printf("Enter the Elements of Matrix 1:  \n");
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            printf("Element [%d][%d] :  ", x+1, y+1);
            scanf("%d", &a[x][y]);
        }
    }

    printf("Enter the Elements of matrix 2:  \n");
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            printf("Element [%d][%d] :  ", x+1, y+1);
            scanf("%d", &b[x][y]);
        }
    }

    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            p = 0;
            for (z = 0; z < 2; z++)
            {
                p = p + (a[x][z] * b[z][y]);
            }
            c[x][y] = p;
        }
    }

    printf("The Resultant Matrix is:  \n");
    for (x = 0; x < 2; x++)
    {
        printf("\n");
        for (y = 0; y < 2; y++)
        {
            printf("%d ", c[x][y]);
        }
        printf("\n");
    }

    return 0;
}