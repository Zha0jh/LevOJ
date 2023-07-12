#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c,d,e,i,j,max,min,total;
        int aa[10],bb[10],cc[10],dd[10],ee[10];
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        for(i=0;i<a;i++)
        {
            scanf("%d",&aa[i]);
        }
        for(i=0;i<b;i++)
        {
            scanf("%d",&bb[i]);
        }
        for(i=0;i<c;i++)
        {
            scanf("%d",&cc[i]);
        }
        for(i=0;i<d;i++)
        {
            scanf("%d",&dd[i]);
        }
        for(i=0;i<e;i++)
        {
            scanf("%d",&ee[i]);
        }
        scanf("%d%d",&min,&max);
    }
    return 0;
}
