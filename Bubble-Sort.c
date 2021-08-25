#include <stdio.h>

int main()
{
    int array[100], num, x, y, swap;

    printf("Enter the Number of Elements:  \n");
    scanf("%d", &num);

    printf("Enter the %d Elements:  \n", num);

    for (x = 0; x < num; x++)
    {
        scanf("%d", &array[x]);
    }
        
    for (x = 0 ; x < num - 1; x++)
    {
        for (y = 0 ; y < num - x - 1; y++)
        {
        if (array[y] > array[y+1])
        {
            swap       = array[y];
            array[y]   = array[y+1];
            array[y+1] = swap;
        }
        }
    }

    printf("Array after Sorting:  \n");

    for (x = 0; x < num; x++)
    {
        printf("%d  ", array[x]);
    }
    
    return 0;
}