#include<iostream>
using namespace std;
void sort(int a[],int n);
int main()
{
    int n,i,j,k,sum=0,m=0;
    cin>>n;
    int number[n];
    int dif[10001]={0};
    for(i=0;i<n;i++)
    {
        cin>>number[i];
    }
    sort(number,n);
    
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {

            for(k=j+1;k<n;k++)
            {
                if(number[i]+number[j]==number[k])
                dif[k]++;
            }
        }
    }
    for(i=0;i<10001;i++)
    {
        if(dif[i]!=0)
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}

void sort(int a[],int n)
{
    int i,k,t;
    for(i=0;i<n-1;i++)
    {
        for(k=i+1;k<n;k++)
        {
            if(a[i]>a[k])
            {
                t=a[i];
                a[i]=a[k];
                a[k]=t;
            }
        }
    }
}