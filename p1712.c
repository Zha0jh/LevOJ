#include <stdio.h>
int main()
{
    int k;
    int n,i;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&n);
        for(i=1;n-i>0;i++)
        {
            n-=i;
        }
        printf("%d\n",((n-1)%9+1));
    }
    return 0;
}