#include <stdio.h>

int main()
{
    int ar[50], n, x;

    printf("Enter The Number of Elements in the Array:  \n");
    scanf("%d", &n);

    printf("Enter the %d Elements:  \n", n);

    for (x = 0; x < n; x++)
    {
        scanf("%d", &ar[x]);
    }

    for (x = 0; x < n; x++)
    {
        printf("%d  ", ar[x]);
    }

    return 0;
}