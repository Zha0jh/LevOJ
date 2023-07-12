#include <stdio.h>
#define N 100000
void multiply(int result[],int x)
{
	int carry=0,value,i;
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
	result[0]=1;
	for(i=2;i<=n;i++)
	{
		multiply(result,i);
	}
	i=N-1;
	while(i>=0&&result[i]==0)
	{
		i--;	
	}
	printf("%d\n",i+1);//i--多减了一个 
}
int main()
{
	int a,n;
	scanf("%d",&a);
	for(a;a>0;a--)
	{
		scanf("%d",&n);
		factorial(n);
	}
	return 0; 
}
