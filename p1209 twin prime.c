#include <stdio.h>
#include <math.h>
int is_prime(int m)
{
    if(m<2)
    return 0;
    int i;
    for(i=2;i<sqrt(m);i++)
    {
        if(m%i==0)
        return 0;
    }
    return 1;
}

int main()
{
    int m;
    while(~scanf("%d",&m))
    {
        for(int i=m;i>=2;i--)
        {
            if(is_prime(i)&&is_prime(i-2))
            {
                printf("%d %d\n",i-2,i);
                break;
            }
        }
    }
    return 0;
}





