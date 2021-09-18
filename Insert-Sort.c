#include <stdio.h>

int main()
{
    int array[100], num, x, y, vari;
 
    printf("Enter the Number of Elements:  ");
    scanf("%d", &num);
 
    printf("Enter the Elements of the Array:  \n", num);

    for (x = 0; x < num; x++)
    {
        scanf("%d", &array[x]);
    }

    for (x = 1 ; x <= num - 1; x++)
    {
	    y = x;
            while ( y > 0 && array[y-1] > array[y])
            {	        
                vari = array[y];
                array[y] = array[y-1];
                array[y-1] = vari;
                y--;
            }
    }

    printf("Sorted list in ascending order:\n");
    
    for (x = 0; x <= num - 1; x++)
    {
        printf("%d  ", array[x]);
    }
    
    return 0;
}