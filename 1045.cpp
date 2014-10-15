#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double Vs,R,C;
    int n;
    double w[1000];
    cin>>Vs>>R>>C>>n;
    int i=0;
    for( i=0;i<n;i++)
    {
        cin>>w[i];
        w[i]=(Vs*C*R*w[i])/sqrt(1+C*C*R*R*w[i]*w[i]);
    }
    for( i=0;i<n;i++)
    {
        cout<<fixed<<setprecision(3)<<w[i]<<endl;
    }
    return 0;
}
