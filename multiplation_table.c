#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 50)
    {

        for (int i = 1; i <= 12; i++)
        {
            int multi = n * i;
            printf("%d * %d = %d\n", n, i, multi);
        }
    }

    return 0;
}