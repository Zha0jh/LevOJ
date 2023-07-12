#include<stdio.h>
#include<stdlib.h>
#define N 120
int main()
{
    int n,x,y,num;
    int arr[N][N];
    x=y=0,num=1;
    int flag=1;
    while(~scanf("%d",&n))
    {
           for(y;y<n;y++)
           {
                if(flag==1)
                    {
                        for(x;x<n;x++)
                        arr[x][y]=num++;
                        flag--;
                    }
                else
                {
                    for(x=n-1;x>=0;x--)
                    arr[x][y]=num++;
                    flag++;
                }
           }
    }
}