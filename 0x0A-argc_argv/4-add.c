#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that adds positive numbers.
 *@argc: argc parameter
 *@argv: an array of a command listed
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
    int sum = 0;

    int i, j, positive_num;

    if (argc <= 1)
    {
        printf("0\n");
        return (1);
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            for (j = 0; argv[i][j] != '\0'; j++)
            {
                if (argv[i][j] < '0' || argv[i][j] > '9')
                {
                    printf("Error\n");
                    return (1);
                }
            }
        }

        for (i = 1; i < argc; i++)
        {
            positive_num = atoi(argv[i]);
            if (positive_num >= 0)
            {
                sum += atoi(argv[i]);
            }
        }

        printf("%d\n", sum);
    }

    return (0);
}
