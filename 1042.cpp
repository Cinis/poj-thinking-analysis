poj-thinking-analysis
=====================

About the puk university judge online problems
#include<stdio.h>
#define g 30
int main()
{
    int n,h,tt=0;
    int f[g],d[g],t[g],s[g];
    while(~scanf("%d",&n))
    {   
        if(n==0)
            break;
        scanf("%d",&h);
        h=h*12;
        for(int i=1;i<=n;i++)
            scanf("%d",&f[i]);
        for(int i=1;i<=n;i++)
            scanf("%d",&d[i]);
        for(int i=2;i<=n;i++)
            scanf("%d",&t[i]);
        if(tt++) printf("\n");
        t[1]=0;

        int ff[g],ss[g],sum=0,maxn=-1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                ff[j]=f[j];
            for(int j=1;j<=n;j++)
                ss[j]=0;
            h=h-t[i];
            sum=0;
            for(int j=1;j<=h;j++)
            {
                int max=1;
                for(int k=1;k<=i;k++)
                    if(ff[k]>ff[max])
                        max=k;
                if(ff[max]<=0)
                    break;
                sum+=ff[max];
                ff[max]-=d[max];
                ss[max]+=5;
            }
            if(sum>maxn)
            {
                maxn=sum;
                int num=0;
                for(int j=1;j<=n;j++)
                {
                    s[j]=ss[j];
                    num+=ss[j];
                }
                s[1]=s[1]+h*5-num;
            }
        }
        for(int i=1;i<n;i++)
            printf("%d, ",s[i]);
        printf("%d\n",s[n]);
        printf("Number of fish expected: %d\n",maxn);

    }
    return 0;
}
