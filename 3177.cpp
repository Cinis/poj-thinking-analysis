#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,t;
    char s[15];
    while(cin>>n>>t)
    {
        if(n==0&&t==0)
            break;
        int a;//a为每个队的积分
        int sum=0;
        while(n--)
        {
            cin>>s>>a;
            sum+=a;
        }
        cout<<3*t-sum<<endl;
    }
    return 0;
}
