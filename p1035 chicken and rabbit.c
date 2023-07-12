#include<stdio.h>
int main()
{
	int m,n,a,b;
	while(~scanf("%d %d",&m,&n))
	{
		if(n%2!=0||m<0||n<0)
		{
			printf("-1 -1\n");
			continue;//不能用break，会导致程序退出 
		}
		a=(4*m-n)/2;
		b=m-a;
		if(a<0||b<0)
		{
			printf("-1 -1\n");
			continue;
		} 
		printf("%d %d\n",a,b);
	}
	return 0;
}