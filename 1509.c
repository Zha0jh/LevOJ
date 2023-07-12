#include<stdio.h>
#include<string.h>
int d(char n[],int k)
{
	int i=0;
    int re=0;
	for(;i<k;i++){
		re+=n[i]-'0';
		n[i]=re/2+'0';
		re=(re%2)*10;
	}
	if(n[0]=='0'){
		for(i=0;i<k;i++)
			n[i]=n[i+1];
		k--;
	}
	return k;
}
int main()
{
	/* (ab)%c=(a%c)(b%c) */
	char b[105];
	int a;
	while(~scanf("%d %s",&a,b))
    {
		int ba=a%1337,lb=strlen(b);
		a=1;
		while(lb)
        {
			if((b[lb-1]-'0')%2)
				a=(a*ba)%1337;
			lb=d(b,lb);
			ba=(ba*ba)%1337;
		}
		printf("%d\n",a);
	}
	return 0;
}