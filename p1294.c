#include <stdio.h>

int main()
{
	int length,width,t;
	int square;
	while(~scanf("%d",&length))
	{
		square=0;
		scanf("%d",&width);
		while(length>=1)
		{
			if(length<width)
			{
				t=length;
				length=width;
				width=t;
			}
			square+=length/width;
			length%=width;
		}
		printf("%d\n",square);
	}
	return 0;
}
