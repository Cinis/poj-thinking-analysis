#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int i;
    int cipher[26],clear[26];
    memset(cipher,0,sizeof(cipher));
    //对长度为sizeof（cipher）=int*26=104的
    //连续内存空间cipher全部元素初始化为0
    memset(clear,0,sizeof(clear));
    string input;
    cin>>input;
    for(i=0;i<input.length();i++)
    {
        cipher[input[i]-'A']++;
    }
    cin>>input;
    for(i=0;i<input.length();i++)
    {
        clear[input[i]-'A']++;
    }
    sort(cipher,cipher+26);
    //标准库自带函数sort（ip_start，ip_end）
    //对某连续的地址段的对象内容进行升序快排
    //从小到大
    sort(clear,clear+26);
    //亦即sort(ip_start+m,ip_start+n)，其中
    //为从ip_start+m开始（包括ip_start+m）对
    //第n到第m个对象进行排序
    for(i=0;i<26;i++)
        if(cipher[i]!=clear[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        cout<<"YES"<<endl;
        return 0;
}


//这道题很奇怪我在本地编译的时候是不能通过的，我将头文件#include<string>改为#include<string.h>
//但是submit的时候却一直wa，后来改了之后就ac了 这个还真的是一个怪问题


//解题思路：
//相比较明文和密文来说substitution 的规则都是从明文每个字母加上一个相同的数，依次循环来还是26个数字
//也就是说，对明文和密文的每个字母相对应的的字母出现的次数是一样的，那么就是可以翻译的
//A B C D 为铭文中的字母，B H U K是密文中的字母并且都出现了一次，那么就可以说是相对应的
//然后再将出现的次数进行排序，再将这个序列进行对比，就可以判断是否可以进行翻译
