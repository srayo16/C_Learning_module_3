#include <stdio.h>

int main()
{
    int n;
    printf("Please give number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {

            printf("Hello, i= %d, It's even\n", i);
        }
        else
        {
            printf("Hello, i= %d, It's odd\n", i);
        }
    }

    return 0;
}