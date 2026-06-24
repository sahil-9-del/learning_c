#include <stdio.h>

int main()
{
    int a, n;
    printf("Enter 0 for triangular star pattern \n Enter 1 for reversed triangular pattern\n");
    scanf("%d", &a);
    printf("Enter the number of lines of triangle\n");
    scanf("%d", &n);
    if (a == 0)
    {
        int initial = 0, x = 0, i = 1;
        while (i <= n)
        {
            printf("*");
            x = x + 1;
            if (i == x)
            {
                printf("\n");
                i = i + 1;
                x = initial;
            }
            else
            {
            }
        }
    }
    else if (a == 1)
    {
        for (int j = 0; j < n; n--)
        {
            for (int i = 0; i < n; i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
