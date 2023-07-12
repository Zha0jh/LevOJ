#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
    {
		int a,b,c,d,e;
        int min,max,i,j,k,l,m,n,total=0;
		int aa[11],bb[11],cc[11],dd[11],ee[11];
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		for(i=0;i<a;i++)scanf("%d",&aa[i]);
		    for(i=0;i<b;i++)scanf("%d",&bb[i]);
		        for(i=0;i<c;i++)scanf("%d",&cc[i]);
		            for(i=0;i<d;i++)scanf("%d",&dd[i]);
                        for(i=0;i<e;i++)scanf("%d",&ee[i]);
                        {
                            scanf("%d%d",&min,&max);
                        }
		dd[d]=0;ee[e]=0;
		for(i=0;i<d;i++)for(j=i+1;j<=d;j++)
			for(k=0;k<e;k++)for(l=k+1;l<=e;l++)
            {
				int s=dd[i]+dd[j]+ee[k]+ee[l];
				for(m=0;m<a;m++)for(n=0;n<b;n++)
                {
					s+=aa[m]+bb[n];
					if(s<=max&&s>=min)	total++;
					s-=aa[m]+bb[n];
				}
				for(m=0;m<c;m++)
                {
					s+=cc[m];
					if(s<=max&&s>=min)	total++;
					s-=cc[m];
				}
			}
		printf("%d\n",total);
	}
	return 0;
}