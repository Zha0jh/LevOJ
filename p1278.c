#include <stdio.h>
int main()
{
	int a[121][121];
	int flag,n,i,j,num;
	while(~scanf("%d",&n))
	{
		for(i=0;i<100;i++)
		{
			for(j=0;j<100;j++)
			{
				a[i][j]=0;
			}
		}
		flag=1,i=0,j=0,num=1;
		while(num<=n*n)
		{
			if(a[i][j]==0)
			{
				a[i][j]=num;
				num++;
			}
			if(flag==1)
			{
				i++;
				if(i==n)
				{
					i--;//别忘了减啊！
					flag=0;
					j++;
				}
			}
			else if(flag==0)
			{
				i--;
				if(i==-1)
				{
					i++;
					flag=1;
					j++;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n"); 
		}
		printf("\n");
	}
	return 0;
}