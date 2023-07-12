#include <stdio.h>
#include <stdlib.h>
#define Abs(a) (((a) > 0 ? (a) : (-(a))))
int cm(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int n, x[100001], y[100001], xb, yb, i, an = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d%d", x + i, y + i);
    qsort(x, n, sizeof(int), cm);
    qsort(y, n, sizeof(int), cm);
    for (i = 0; i < n; i++)
        x[i] -= i;
    qsort(x, n, sizeof(int), cm);
    if (n % 2)
    {
        xb = x[n / 2];
        yb = y[n / 2];
    }
    else
    {
        xb = (x[n / 2] + x[n / 2 - 1]) / 2;
        yb = (y[n / 2] + y[n / 2 - 1]) / 2;
    }
    for (i = 0; i < n; i++)
        {
            an += Abs(x[i] - xb) + Abs(y[i] - yb);
        }
    printf("%d", an);
    return 0;
}