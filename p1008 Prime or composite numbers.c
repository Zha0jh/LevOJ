#include <stdio.h>
#include<math.h>

int isprime(int zjh)
{
    int i;
    for(i=2;i<=sqrt(zjh);i++)
    if(zjh%i==0)
    return 0;
    return 1;
}

int main()
{
    int a;
    while(~scanf("%d",&a))
    {
        if(isprime(a)==1)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}