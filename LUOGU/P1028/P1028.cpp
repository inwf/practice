#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int dp[1010]={0};
    dp[0]=0;
    dp[1]=0;
    for(i=1;i<=n;i++)
    {
         for(int j=1;j<=i/2;j++)
        {
            dp[i]+=dp[j];
        }
        dp[i]++;
    }
    cout<<dp[n];
}
//还是较顺利的，写出地推公式后就能写出题解啦
/*
f(1)=1
f(2)=f(1)+1
f(3)=f(1)+1
f(4)=f(1)+f(2)+1
f(5)=f(1)+f(2)+1
f(6)=f(1)+f(2)+f(3)+1
*/