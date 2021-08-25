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

    printf("Enter the New Element of the Array:  ");
    scanf("%d", &num);

    printf("Enter the Location of Insertion of the Element:  ");
    scanf("%d", &pos);

    if (pos >= n+1)
    {
        printf("Insertion for this element is not Possible");
    }
    else
    {
        for (x = n; x >= pos - 1; x--)
        {
            ar[x + 1] = ar[x];
        }

        ar[pos - 1] = num;
        printf("The New Array is:  \n");
        for (x = 0; x <= n; x++)
        {
            printf("%d \n", ar[x]);
        }
    }

    return 0;
}