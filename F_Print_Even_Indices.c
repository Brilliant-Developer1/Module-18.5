#include <stdio.h>

void recursion(int array[], int n)
{
    if (n == 0)
    {
        return;
    }

    if (n % 2 != 0)
    {
        printf("%d ", array[n - 1]);
    }
    recursion(array, n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    recursion(array, n);

    return 0;
}

/*
0 1 2 3
1 4 2 7
*/