// #include <stdio.h>
// int main()
// {
// 	int n,a,b,c;
// 	for(scanf("%d",&n);n;n--)
// 	{
// 		scanf("%d%d",&a,&b);
// 		if(a<b)
// 		{
// 			c=a;a=b;b=c;
// 		}
// 		while(c=a%b)
// 		{
// 			a=b;b=c;
// 		}
// 		printf("%d\n",b);
// 	}
// 	return 0;
// }

#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int n;
    int a, b;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", gcd(a, b));
    }
    return 0;
}
