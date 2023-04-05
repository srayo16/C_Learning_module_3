#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("Hello i= %d\n", i);
        if (i == 5)
        {
            break;
        }
    }

    return 0;
}