#include<iostream>
using namespace std;
int dp[100010]={0};
void dt(int i,int n,int k)              //��̬��
{
    int j;
    for(i=2;i<=n;i++)
    {
        for(j=1>i-k?1:i-k;j<i;j++)
        {
            if(dp[i]>100003)
            dp[i]%=100003;             
            // if(j<=0)                 //����chatgpt����������Ż�Ϊj=1>i-k?1:i-k
            // j=1;
            dp[i]+=dp[j];
            if(dp[i]>100003)            //����һ���״��ʹ����⣬�ݹ�����ȷ�ģ������%100003�������ݹ��󳬹�int��Χ
            dp[i]%=100003; 
        }
        if(k>=i)                        //�ж��Ƿ�Ҫ+1��
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
��
���ÿ����
����dpû��...
naivenaivenaivenaivenaivenaive
        *   *   *   *
���д��󶼹����naive,�ǲ���Ҳ����naive��
*/



