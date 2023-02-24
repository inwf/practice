#include<iostream>
using namespace std;
void dt(int n);
int fb[8000005]={0};
int main()
{
    fb[0]=0;
    fb[1]=1;
    int n,M;
    cin>>M;
    dt(M);
    for(n=1;n<=8000000;n++)
    {
        if(fb[n]==0&&fb[n+1]==1)
        break;
    }
    cout<<n<<endl;;
}
void dt(int M)
{
    for(int i=2;i<=8000000;i++)
    {
        fb[i]=fb[i-1]+fb[i-2];
        fb[i]%=M;
    }
}