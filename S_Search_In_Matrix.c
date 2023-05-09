#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int array[row][col];

    for (int i = 0; i < row; i++)
    {

        for (int u = 0; u < col; u++)
        {
            scanf("%d", &array[i][u]);
        }
    }

    int e, flag = 0;
    scanf("%d", &e);
    for (int i = 0; i < row; i++)
    {

        for (int u = 0; u < col; u++)
        {

            if (array[i][u] == e)
            {
                flag++;
            }
        }
    }
    if (flag)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}