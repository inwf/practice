#include<iostream>
using namespace std;
int nums(int m,int n)
{
    if(m==0||m==1||n==1)
    return 1;
    else if(m>=n)
    return nums(m-n,n)+nums(m,n-1);
    else
    return nums(m,m);
}
int main()
{
    int m,n,t;
    cin>>t;
    while (t--)
    {
        cin>>m>>n;
       cout<<nums(m,n)<<endl;
    }
}