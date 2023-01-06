#include<iostream>
using namespace std;
int sum(int n);
int main()
{
    int n,i,k,j=1,t;
    cin>>n;
    for(i=0;i<10000;i++)
    {
        if(sum(i)<n&&sum(i+1)>=n)
        break;
    }
    t=sum(i);
    k=i+1;
    for(i=1;i<n-t;i++)
    {
        k--;
        j++;
    }
    cout<<k<<"/"<<j;
    return 0;
}
int sum(int n)
{
    return n*(n+1)/2;
}