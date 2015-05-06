#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T=0;
    int H=0,M=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d:%d",&H,&M);
        M?puts("0"):printf("%d\n",H>12?H-12:H+12);
    }
    return 0;
}
