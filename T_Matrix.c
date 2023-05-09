#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int array[n][n];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int flag = 0;
    int flag2 = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                flag += array[i][j];
            }
            if (i + j == n - 1)
            {
                flag2 += array[i][j];
            }
        }
    }
    int res = abs(flag - flag2);
    printf("%d", res);

    return 0;
}