#include <stdio.h>

int main()
{
    int inputPassword;
    for (int i = 0; i > -1; i++)
    {
        scanf("%d", &inputPassword);
        if (inputPassword >= 1000 && inputPassword <= 9999)
        {
            if (inputPassword == 1999)
            {
                printf("Correct");
                break;
            }
            else
            {
                printf("Wrong\n");
            }
        }
    }

    return 0;
}
