#include <stdio.h>

int main()
{
    int x, y, a[2][2], b[2][2], c[2][2];

    printf("Enter the Elements of Matrix 1:  \n");
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            printf("Element [%d][%d] :  ", x+1, y+1);
            scanf("%d", &a[x][y]);
        }
    }

    printf("Enter the Elements of Matrix 2:  \n");
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
            c[x][y] = a[x][y] + b[x][y];
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