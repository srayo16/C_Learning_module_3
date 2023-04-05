#include <stdio.h>

int main()
{

    long long int sum = 0;
    int n;
    printf("Please give input: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        /* code */
    }
    printf("The sum is: %lld", sum);

    return 0;
}