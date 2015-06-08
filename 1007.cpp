#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>

using namespace std;

typedef struct
{
    string str;//存储DNA序列
    int num;//存储每个DNA序列的逆序数
}DNA;
DNA d[100];

bool cmp(DNA a,DNA b)//比较函数，结合main函数里面的stable_sort对数组进行排序
{
    return a.num<b.num;
}

int main()
{
    int m,n;
    cin>>m>>n;//输入m，n m字符串的长度，n有几个试用例
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>d[i].str;
        d[i].num=0;
        for(int k=1;k<m;k++)
        {
            for(int j=0;j<k;j++)
            {
                if(d[i].str[k]<d[i].str[j])
                    d[i].num++;
            }
        }
    }

    stable_sort(d,d+n,cmp);
    
    for( i=0;i<n;i++)
    {
        cout<<d[i].str<<endl;
    }

    return 0;
}
// the new and fast way
#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>

using namespace std;

struct DNA
{
    char s[100];
    int num;
}w[100];

bool cmp(DNA a,DNA b)
{
    return a.num<b.num;
}

int count_inver(char *str,int len)
{
    int i;
    int cnt=0;
    int a[4]={0};
    for(i=len-1;i>=0;i--)
    {
        switch(str[i])
        {
        case 'A':
                a[1]++;
                a[2]++;
                a[3]++;
                break;
        case 'C':
                a[2]++;
                a[3]++;
                cnt+=a[1];
                break;
        case 'G':
                a[3]++;
                cnt+=a[2];
                break;
        case 'T':
                cnt+=a[3];
        }
    }
    return cnt;
}
int main()
{
    int m,n,i,j;
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>w[i].s;
        w[i].num=count_inver(w[i].s,m);
    }
    stable_sort(w,w+m,cmp);

    for(j=0;j<n;j++)
    {
        cout<<w[i].s<<endl;
    }
}



//This problem is about inverted Sequence Number
//Obviously we should get the inversion Number at first
//and then sort it.(use qsort() function)
