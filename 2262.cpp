#include<stdio.h>

bool judge_prime(int digit)
{
    int i,flag;
    if(digit%2==0)
        return false;
    else
    {
        for(i=3,flag=1;i*i<=digit;i+=2)
            if(digit%i==0)
            {
                flag=0;
                break;
            }
        if(flag)
            return true;
    }
    return false;
}

int main(void)
{
    int temp,num,flag;
    while(scanf("%d",&num)!=EOF)
    {
        if(num%2!=0||num<6)
            return 0;
        for(temp=3,flag=1;temp<=num/2;temp+=2)
            if(judge_prime(temp)&&judge_prime(num-temp))
            {
                printf("%d",num);printf(" = ");printf("%d",temp);
                printf(" + ");printf("%d\n",num-temp);
                flag=0;
                break;
            }
        if(flag)
            printf("Goldbach's conjecture is wrong.");
    }
    return 0;
}
