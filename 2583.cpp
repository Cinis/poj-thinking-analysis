#include<stdio.h>

int main()
{
    int a,b,c,f1,f2,f3,f4,f5;
    while(scanf("%d %d %d",&c,&f1,&f2)!=EOF)
   {
        a=(f2-2*f1+c)/2;
        b=f1-a-c;
        f3=a*9+b*3+c;
        f4=a*16+b*4+c;
        f5=a*25+b*5+c;
        printf("%d %d %d\n",f3,f4,f5);
   }
    return 0;
}
