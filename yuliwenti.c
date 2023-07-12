#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,count,room[10000];
	while(~scanf("%d",&n))
	{
		count=0;
		for(i=1,j=0;i<n;i++,j++)
		{
			if(i*i<=n)
			{
				room[j]=i*i;
				count++;
			}
		}
		for(j=0;j<count;j++)
		printf("%d ",room[j]);
		printf("\n");
	}
	return 0;
}
