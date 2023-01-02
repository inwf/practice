#include<iostream>
#include<cstring>
using namespace std;
int min(int a,int b)
{
    return a<b?a:b;
}
int main()
{
    int n,number[3],price[3],sum[3]={0},money[3]={0},i;
    cin>>n>>number[0]>>price[0]>>number[1]>>price[1]>>number[2]>>price[2];
    for(i=0;i<3;i++)
    {
        while (sum[i]<n)
        {
            sum[i]+=number[i];
            money[i]+=price[i];
        }
    }
    cout<<min(min(money[0],money[1]),money[2])<<endl;
}