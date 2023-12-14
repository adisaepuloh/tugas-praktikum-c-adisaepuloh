#include <stdio.h>

int main()
{
    char A[8] = {'A', 'R', 'A', 'K', 'A', 'K', 'A', '0'};

    int duplikat = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (A[i] == A[j])
            {
                printf("ADA\n");
                printf("%c\n",A[i]);
                duplikat = 1;
                break;
            }
        }
        if (duplikat == 1)
        {
            break;
        }
    }
    if (duplikat == 0)
    {
        printf("TIDAK ADA\n");
    }

    return 0;
}
