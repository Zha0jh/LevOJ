#include <stdio.h>
int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        int year;
        n=n-k;//相对工资
        year=200/n;//算多少年，可能会出现除不尽
        if(n*year<200)
        {
            year++;//排除除不尽
        }
        if(year>=0&&year<=20)
        {
            printf("%d\n",year);
        }
        else
        {
            printf("Impossible\n");
        }
    }
    return 0;
}