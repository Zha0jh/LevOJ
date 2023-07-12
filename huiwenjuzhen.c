#include<stdio.h>
int main()
{
	int a[100][100]={0},n,count,i,j,flag;//flag是标记方向 
	while(~scanf("%d",&n))
	{
		for(i=0;i<100;i++)
		{
			for(j=0;j<100;j++)
			{
				a[i][j]=0;
			}
		}
		i=0,j=n-1,flag=1,count=1;
		while(count<=n*n)
		{
			if(a[i][j]==0)
			{
				a[i][j]=count;
				count++;
			}
			if(flag==1)
			{
				i++;
				if(i==n||a[i][j]!=0)
				{
					i--;
					flag=2;
				}
			}
			else if(flag==2)
			{
				j--;
				if(j==-1||a[i][j]!=0)
				{
					j++;
					flag=3;
				}
			}
			else if(flag==3)
			{
				i--;
				if(i==-1||a[i][j]!=0)
				{
					i++;
					flag=4;
				}
			}
			else if(flag==4)
			{
				j++;
				if(j==n||a[i][j]!=0)
				{
					j--;
					flag=1;
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
	}
	return 0;
}
