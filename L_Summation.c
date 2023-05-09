#include <stdio.h>

long long int ans = 0;
void recursion(int array[], int n)
{
    if (n == 0)
    {
        printf("%lld", ans);
        return;
    }
    ans = ans + array[n - 1];
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

// #include <stdio.h>

// int sum(int arr[], int n)
// {
//     if (n == 1)
//     {
//         return arr[0];
//     }
//     else
//     {
//         return arr[n - 1] + sum(arr, n - 1);
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("%d", sum(arr, n));
//     return 0;
// }
