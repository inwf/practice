#include<iostream>
using namespace std;
int dp[110][1010];
int main()
{
    int T,M;
    while (cin>>T>>M)
    {
        int w[M],v[M];
        for(int i=1;i<=M;i++)
        {
            cin>>w[i]>>v[i];
        }
        for(int i=1;i<=M;i++)
        {
            for(int j=1;j<=T;j++)
            {
                if(j<w[i])//装不了
                {
                    dp[i][j]=dp[i-1][j];
                }else//可装
                {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
                }
            }
        }
        cout<<dp[M][T]<<endl;
    }
    return 0;
}