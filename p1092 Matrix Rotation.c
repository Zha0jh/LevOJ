#include <stdio.h>

void rotate(int n, int matrix[n][n], int kd)
{
    int result[n][n];
    int index;
    int x, y;
    for (index = 0; index < kd; index++)
    {
        for (y = 0; y < n; y++)
        {
            for (x = 0; x < n; x++)
            {
                result[y][n-1-x] = matrix[x][y];//反了就是顺时针了
            }
        }

   
    }
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < n; y++)
        {
            printf("%d ", result[x][y]);
        }
        printf("\n");
    }
}

int main()
{
    int n, kd, matrix[10][10]={0};
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    scanf("%d", &kd);
    rotate(n, matrix, kd);
    system("pause");
    return 0;
}