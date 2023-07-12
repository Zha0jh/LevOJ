#include<stdio.h>
#define N 10000
int main()
{
	int n,i,index,baoshu,m,count;
	int table[N];
	scanf("%d %d",&n,&m);
		for(i=1;i<=n;i++)
			table[i]=1;
		index=0,baoshu=0,count=n;
		while(count>0)
		{
			index++;
			baoshu++;

			while(table[index]==0)
			{
				index++;
				if(index>n)
				{
					index=1;
				}
			}
			if(baoshu==m)
			{
				table[index]=0;
				printf("%d ",index);
				baoshu=0;
				count--;
			}
		}
		printf("\b");
	return 0;
} 
