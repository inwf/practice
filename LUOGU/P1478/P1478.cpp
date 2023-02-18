#include<iostream>
using namespace std;
void sort(int a[5010][2],int n);
int main()
{//苹果数n，体力s,椅子的高度a，手大b
    int n,s,a,b,i,sum=0;
    cin>>n>>s>>a>>b;
    if(n==0){
        cout<<"0"<<endl;
        return 0;
    }
    int len=a+b;
    int x[n+1][2]={0};              //第n给苹果的高度(0)，力气(1)
    for(i=1;i<=n;i++)
    {
        cin>>x[i][0]>>x[i][1];     
    }
    sort(x,n);
    for(i=1;s-x[i][1]>=0;i++)
    {
        if(len>=x[i][0])
        {
            sum++;
            s=s-x[i][1];
        }
    }
    cout<<sum<<endl;
}

void sort(int a[5010][2],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i][1]>a[j][1])
            {
                t=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=t;
                t=a[i][0];
                a[i][0]=a[j][0];
                a[j][0]=t;
            }
        }
    }
}

