#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int a,n,k,sum,MidX,MidY;
    int X,Y;
    int SoldierX[10010];
    int SoldierY[10010];
    while (cin>>n)
    {
        sum=0;
        X=0;
        Y=0;
        k=n;
        for(int i=1;i<=n;i++)
        {
            cin>>SoldierX[i]>>SoldierY[i];
        }
        sort(&SoldierY[1],&SoldierY[n+1]);
        sort(&SoldierX[1],&SoldierX[n+1]);
        for(int i=1;i<=n;i++)
        {
            SoldierX[i]=SoldierX[i]-i;
        }
        sort(&SoldierX[1],&SoldierX[n+1]);
        MidX=n%2==0?(SoldierX[n/2]+SoldierX[n/2+1])/2:SoldierX[n/2+1];
        MidY=n%2==0?(SoldierY[n/2]+SoldierY[n/2+1])/2:SoldierY[n/2+1];
        for(int i=1;i<=n;i++)
        {
            sum+=abs(SoldierY[i]-MidY)+abs(SoldierX[i]-MidX);
        }
         cout<<sum<<endl;
    }
    return 0;
}