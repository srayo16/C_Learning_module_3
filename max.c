#include <stdio.h>

int main()
{
    int x;
    int y;
    int max = 0;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &y);

        if (y > max)
        {
            max = y;
        }
    }
    printf("%d", max);

    return 0;
}