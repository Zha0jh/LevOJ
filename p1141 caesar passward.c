#include<stdio.h>
#include<string.h>

#define N 140001
#define shift 5

int main()
{
    char line[10];
    char miwen[N];
    char mingwen[N];
    int length,i,j;
    while(1)
    {
        scanf("%s",line);
        if(strcmp(line,"ENDOFINPUT")==0)
        {
            break;
        }
        scanf("%s",miwen);
        scanf("%s",line);
        length=strlen(miwen);
        for(i=0;i<length;i++)
        {
            if(miwen[i]>='A'&&miwen[i]<='Z')
            {
                mingwen[i]=((miwen[i]-'A')+(26-shift))%26+'A';
            }
            else
            {
                mingwen[i]=miwen[i];
            }
        }
    }
    mingwen[length]='\0';
    printf("\n%S\n",mingwen);
    getchar();
    getchar();
    return 0;
}