#include<stdio.h>
int main()
{
    int Money;
    double cun;
    double rate=1+(0.0171/12);
    while(~scanf("%d",&Money))
    {
        cun=0.0;
        int m=48;
        while(m--)
        {
            cun+=Money;
            cun/=rate;
        }
        printf("%.2f\n",cun);
    }
    return 0;
}

