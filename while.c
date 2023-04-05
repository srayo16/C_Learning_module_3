#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("Hello, i is %d\n", i);
        i++;
        if (i == 6)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}