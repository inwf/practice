#include<iostream>
using namespace std;
int main()
{
    int cost[13]={0},mother=0,now=0,give;
    int i,k;
    for(i=1;i<=12;i++)
    {
        cin>>cost[i];
    }
    for(i=1;i<=12;i++)
    {
        now+=300;
        if(now-cost[i]>=100)
        {
            give=(now-cost[i])/100*100;
            mother+=give;
        }else if(now-cost[i]<0)
        {
            cout<<-i<<endl;
            goto a;
        }else give=0;
        now=now-cost[i]-give;
    }
    cout<<(double)mother*1.2+now<<endl;
    a:
    return 0;
}