#include<iostream>
#include<string>
using namespace std;
int number(int n,int x);
int main()
{
    int i,k,n,s,x;
    double sum[101]={0},dx=7;
    cin>>s>>x;
    for(i=1;i<=100;i++)
    {
        sum[i]=sum[i-1]+dx;
        dx=dx*0.98;
    }
    for(i=1;i<100;i++)
    {
        if(sum[i]>s-x&&sum[i+1]>s+x&&sum[i-1]<s-x)
        {
            cout<<"n"<<endl;
            break;
        }
        if(sum[i]<s-x&&sum[i+1]>s+x)
        {
            cout<<"n"<<endl;
            break;
        }
    }
    if(i==100)
    {
        cout<<"y"<<endl;
    }
    return 0;
}
