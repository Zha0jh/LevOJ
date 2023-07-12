#include <stdio.h>
int main()
{
    int money, mai5, mai3, left, sum;
    while (~scanf("%d", &money))
    {
        sum = 0;
        money /= 10;
        mai5 = money / 5;
        mai3 = (money % 5) / 3;
        left = money - mai5 * 5 - mai3 * 3;
        sum = 7 * mai5 + 4 * mai3 + left;
        printf("%d\n", sum);
    }
    return 0;
}