#include <stdio.h>
#define N 3000

void multiply(int result[], int x)
{
	int carry=0,i,value;
	for(i=0;i<N;i++)
	{
		value=result[i]*x+carry;
		result[i]=value%10;
		carry=value/10;
	}
}
void factorial(int n)
{
	int result[N]={0},i;
	//result[N]={0};这个不是初始化 
	result[0]=1;
	for(i=2;i<=n;i++)
	{
		multiply(result,i);
	}
	i=N-1;
	while(result[i]==0&&i>=0)
	{
		i--;
	}
	for(i;i>=0;i--)
	{
		printf("%d",result[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		factorial(n);
	}
	return 0;
}