#include<iostream>
using namespace std;
int dp[100010]={0};
void dt(int i,int n,int k)              //动态？
{
    int j;
    for(i=2;i<=n;i++)
    {
        for(j=1>i-k?1:i-k;j<i;j++)
        {
            if(dp[i]>100003)
            dp[i]%=100003;             
            // if(j<=0)                 //经过chatgpt帮助，这可优化为j=1>i-k?1:i-k
            // j=1;
            dp[i]+=dp[j];
            if(dp[i]>100003)            //其中一个易错点就错在这，递归是正确的，如果不%100003，则数据过大超过int范围
            dp[i]%=100003; 
        }
        if(k>=i)                        //判断是否要+1步
        dp[i]++;
    }
}
int main()
{
    dp[0]=1;
    dp[1]=1;
    int n,k;
    cin>>n>>k;
    dt(1,n,k);
    cout<<dp[n]<<endl;

}


/*
寄
还得看题解
反正dp没错...
naivenaivenaivenaivenaivenaive
        *   *   *   *
所有错误都归结于naive,是不是也是种naive捏
*/



