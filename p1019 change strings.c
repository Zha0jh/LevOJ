#include<stdio.h>
int main()
{
    int i;
    char str[500];
    scanf("%s",str);
    for(i=0;str[i];i++)/*中间那个不要写成i<500*/
    {
        if(str[i]<'A'||str[i]>'Z')
        printf("%c",str[i]);
        else
        printf("%c",str[i]-'A'+'a');
    }
    return 0;
}