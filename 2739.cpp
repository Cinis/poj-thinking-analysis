#include<stdio.h>
#include<stdlib.h>
#include<math.h>
bool isPrime(int num)
{
    int m;
    if(num==2)
        return true;
    //注意，搜索是否可以被整除的范围只在于小于
    //根号num内即可，一旦发现可以被整除，立即跳
    //出循环，这样可以大幅度减少时间消耗，要不然
    //就会超时
    for(m=2;m<(int)sqrt((double)num);m++)
    {
        if(num%m==0)
            break;
    }
    if(num%m==0)
        return false;
    else
        return true;
}
int main()
{
    int Prime[1229];
    int i,j=0;
    int len=1229;
    int in,out,sum;
    //计算10000以内的所有素数
    for(i=2;i<10000;i++)
    {
        if(isPrime(i))
            Prime[j++]=i;
    }
    while(true)
    {
        out=0;
        scanf("%d",&in);
        if(in==0)
            break;
        for(i=0;i<len;i++)
        {
            sum=0;
            for( j=i;j<len;j++)
            {
                sum+=Prime[j];
                if(sum>in)
                    break;
                else if(sum==in)
                {
                    out++;
                    break;
                }
            }
        }
    printf("%d\n",out);
    }
    return 0;
}
