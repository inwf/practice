#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a[7][2]={0},sum[7],max=0;
    int i,k;
    for(i=0;i<7;i++)
    {
        for(k=0;k<2;k++)
        {
            cin>>a[i][k];
        }
    }
    for(i=0;i<7;i++)
    {
        sum[i]=a[i][0]+a[i][1];
    }
    for(i=0;i<6;i++)
    {
        if(sum[i]>8)
        max=max>sum[i]?max:sum[i];
    }
    for(i=0;i<6;i++)
    {
        if(max==sum[i])
        {
            cout<<i+1<<endl;
            break;
        }
        if(max==0)
        {
            cout<<max<<endl;
            break;
        }
    }
   return 0;
}