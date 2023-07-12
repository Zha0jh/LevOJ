#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int A,B,C,t;
	while(n--)
	{
		scanf("%d %d",&A,&B);
		t=0;
		for(i=2;i<=A/2;i++)
		{
			if(A%i==0)
			{
				C=A/i;
				t=t+i+C;
			} 
		}
		t=(t+2)/2;
		if(t==B)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
