#include <stdio.h>

int main()
{
    int ar[50], n, num, x, pos;

    printf("Enter The Number of Elements in the Array:  \n");
    scanf("%d", &n);

    printf("Enter the %d Elements:  \n", n);

    for (x = 0; x < n; x++)
    {
        scanf("%d", &ar[x]);
    }

    printf("Enter the Location of the Element to be Deleted:  ");
    scanf("%d", &pos);

    if (pos >= n+1)
    {
        printf("Deletion for this element is not Possible");
    }
    else
    {
        for (x = pos - 1; x < n - 1; x++)
        {
            ar[x] = ar[x + 1];
        }

        printf("The New Array is:  \n");
        for (x = 0; x < n - 1; x++)
        {
            printf("%d \n", ar[x]);
        }
    }

    return 0;
}