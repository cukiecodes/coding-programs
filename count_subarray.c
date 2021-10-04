#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d\n", &t);
    for (int r = 0; r < t; r++)
    {
        long int n;
        scanf("%ld\n", &n);
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%ld ", &a[i]);
        }
        long int c = 0, f = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                c++;
                f = f + c;
            }
            else
                c = 0;
        }
        printf("%ld\n", f + n);
    }
    return 0;
}
