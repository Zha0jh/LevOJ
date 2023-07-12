#include<stdio.h> 
int main()
{
	int n,k,room[10000];
	int i,j;
	while(~scanf("%d",&n))
	{
		for(i=1;i<=n;i++)
		room[i]=1;
		for(k=1;k<=n;k++)
		{
			for(j=k;j<=n;j+=k)
			room[j]=1-room[j];
		}
		for(i=1;i<=n;i++)
		{
			if(room[i]==0)
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
