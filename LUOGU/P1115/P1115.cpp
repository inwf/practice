#include<iostream>
using namespace std;
int dp[10010];
int main()
{
    int MaxAns;
    int n;
    while (cin>>n)
    {
        int nums[n];
        for(int i=1;i<=n;i++)
        {
            cin>>nums[i];
        }
        MaxAns=nums[1];
        for(int i=1;i<=n;i++)
        {
            dp[i]=max(dp[i-1]+nums[i],nums[i]);
            MaxAns = MaxAns > dp[i] ? MaxAns : dp[i];
        }
        cout<<MaxAns<<endl;
    }
    return 0;    
}
