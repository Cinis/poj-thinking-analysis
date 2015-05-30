#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b,x,y;
        scanf("%d %d",&a,&b);
        x=(a+b)/2;
        y=(a-b)/2;
        if(x<y||(a-b)%2!=0||x<0||y<0)
            printf("impossible\n");
        else
             printf("%d %d\n",x,y);
    }
    return 0;
}
//这道题我wa了好几次，是没有考虑全面这个判定条件
