#include <stdio.h>

int even = 0, odd = 0, positive = 0, negative = 0;

void posiNegi(int a)
{
    if (a > 0)
    {
        positive++;
    }
    else if (a < 0)
    {
        negative++;
    }
    return;
}
void evenodd(int b)
{
    if (b % 2 == 0)
    {
        even++;
    }
    else if (!(b % 2 == 0))
    {
        odd++;
    }
    return;
}

int main()
{
    int n;
    int x;

    scanf("%d", &n);

    if (n >= 1 && n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            if (x >= -100000 && x <= 100000)
            {
                posiNegi(x);
                evenodd(x);
            }
        }
        printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);
    }
    return 0;
}
