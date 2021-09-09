#include <stdio.h>

int main()
{
    int num, arr[100], x, find, fste, mide, lste;
    
    printf("Enter the Number of Elements:  ");
    scanf("%d", &num);

    printf("Enter %d Elementes in Sorted Manner:  \n", num);

    for (x = 0; x < num; x++)
    {
        scanf("%d", &arr[x]);
    }

    printf("Enter the Value to be Found:  ");
    scanf("%d", &find);
    
    fste = 0;
    lste = num - 1;
    mide = (fste + lste) / 2;

    while (fste <= lste)
    {
        if(arr[mide] < find)
        {
            fste = mide + 1;
        }
        else if(arr[mide] == find)
        {
            printf("Element %d found at location %d!!", find, mide + 1);
            break;
        }
        else
        {
            lste = mide -1;
        }

        mide = (fste + lste) / 2;
    }

    if(fste > lste)
    {
        printf("Element not found!! %d is not present in the list!!", find);
    }

    return 0;
}