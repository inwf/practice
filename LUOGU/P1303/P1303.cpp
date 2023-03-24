#include<iostream>
#include<cstring>
using namespace std;
void rev(int fir[],int sec[],string a,string b)
{
    for(int i=0;i<a.length();i++)
    {
        fir[a.length()-i-1]=a[i]-'0';
    }
    for(int i=0;i<b.length();i++)
    {
        sec[b.length()-i-1]=b[i]-'0';
    }
}
int main()
{
    string a,b;
    int fir[2002],sec[2002],ans[4005],MaxLen,x,AnsLen;
    while (cin>>a>>b)
    {
        MaxLen=max(a.length(),b.length());
        AnsLen=a.length()+b.length();
        for(int i=0;i<MaxLen;i++)
        {
            fir[i]=0;
            sec[i]=0;
        }
        for(int i=0;i<=AnsLen;i++)
        {
            ans[i]=0;
        }
        rev(fir,sec,a,b);
        x=0;                                                   
        for(int i=0;i<a.length();i++)                          
        {      
            x=0;                                                     
            for(int j=0;j<b.length();j++)                              
            {
                ans[i+j]=fir[i]*sec[j]+ans[i+j]+x;
                x=ans[i+j]/10;
                ans[i+j]%=10;
            }   
            ans[i+b.length()]=x;                                   
        }
        while (ans[AnsLen]==0&&AnsLen!=0)
        {
            AnsLen--;
        }
        for(int i=AnsLen;i>=0;i--)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
}