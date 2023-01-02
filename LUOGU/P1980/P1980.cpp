#include<iostream>
#include<string>
using namespace std;
int number(int n,int x);
int main()
{
    int i,k=0,n,x;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        k+=number(i,x);
    }
    cout<<k;
    return 0;
}
int number(int n,int x)//x在n中出现几次
{
    int i=0;
    while (n>0)
    {
        if(x==n%10)
        i++;
        n/=10;
    }
    return i;
}