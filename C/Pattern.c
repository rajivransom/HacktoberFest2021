#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = (7 + 1) / 2; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (int l = 1; l < i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    //z
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 4; k > i; k--)
        {
            printf("*");
        } //
        for (int j = 3; j > i; j--)
        {
            printf("*");
        }
        for (int k = 4; k > i; k--)
        {
            printf(" ");
        }

        printf("\n");
    }
}
