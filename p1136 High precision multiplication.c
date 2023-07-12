#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    int na[100],nb[100];
    while(~scanf("%s%s",a,b))
    {
        int lena,lenb,i,j;
        lena=strlen(a),lenb=strlen(b);
        for(i=0,j=lena-1;j>=0;i++,j--)
        {
            na[i]=a[j]-'0';
        }
        for(i=0,j=lenb-1;j>=0;i++,j--)
        {
            nb[i]=b[j]-'0';
        }
        int c[200]={0};
        for(i=0;i<lena;i++)
            for(j=0;j<lenb;j++)
            {
                c[i+j]+=na[i]*nb[j];//是+=，要累加，而不是直接等于，感谢chatGPT帮我找出这个问题
            }
        for(i=0;i<lena+lenb;i++)
        {
            if(c[i]>=10)
            {
                c[i+1]+=c[i]/10;
                c[i]%=10;
            }
        }
        for(i=lena+lenb;i>0;i--)
            if(c[i]!=0)
                break;
        for(j=i;j>=0;j--)
        {
            printf("%d",c[j]);
        }
        printf("\n");
    }
    return 0;
}



//gpt注释版
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100]; // 定义两个字符数组 a 和 b，用于存储两个待乘数的字符串表示
    int na[100],nb[100]; // 定义两个整型数组 na 和 nb，用于存储两个待乘数的各位数字
    while(~scanf("%s%s",a,b)) // 使用 ~scanf("%s%s",a,b) 来循环读入两个待乘数的字符串表示，直到读到 EOF 为止
    {
        int lena,lenb,i,j; // 定义 lena、lenb、i 和 j 四个整型变量
        lena=strlen(a),lenb=strlen(b); // 获取两个字符串表示的长度
        for(i=0,j=lena-1;j>=0;i++,j--) // 将字符串表示的待乘数 a 倒序存储到数组 na 中
        {
            na[i]=a[j]-'0';
        }
        for(i=0,j=lenb-1;j>=0;i++,j--) // 将字符串表示的待乘数 b 倒序存储到数组 nb 中
        {
            nb[i]=b[j]-'0';
        }
        int c[200]={0}; // 定义一个大小为 200 的整型数组 c，并初始化所有元素为 0，用于存储乘积
        for(i=0;i<lena;i++) // 遍历数组 na 的所有元素
            for(j=0;j<lenb;j++) // 遍历数组 nb 的所有元素
            {
                c[i+j]+=na[i]*nb[j]; // 将 na 和 nb 对应位置的数字相乘，并加到乘积数组 c 的相应位置上
            }
        for(i=0;i<lena+lenb;i++) // 处理乘积数组 c 中的进位
        {
            if(c[i]>=10) // 如果当前位置上的数字大于等于 10
            {
                c[i+1]+=c[i]/10; // 将进位加到下一位
                c[i]=c[i]%10; // 将当前位置上的数字取模
            }
        }
        for(i=lena+lenb;i>0;i--) // 找到乘积数组 c 中最高位的有效位
            if(c[i]!=0)
                break;
        for(j=i;j>=0;j--) // 输出乘积数组 c 中的所有有效位
        {
            printf("%d",c[j]);
        }
        printf("\n"); // 输出换行符
    }
    return 0; // 返回 0，表示程序正常结束
}
*/