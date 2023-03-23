#include<iostream> 
#include<cstring>
using namespace std;
void rev(int fir[],int sec[],string a,string b) 
{
    for(int i=0;i<a.length();i++)
    {
        fir[i]=a[a.length()-i-1]-'0';                       
    }
    for(int i=0;i<b.length();i++)
    {
        sec[i]=b[b.length()-i-1]-'0';
    }
}
bool max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    string a,b;
    int fir[20002],sec[20002],ans[20002]={0},i,x,len;
    while (cin>>a>>b)
    {
        if (a.length() < b.length() || (a.length() == b.length() && a < b))
        {
            swap(a, b);
            cout<<'-';
        }
        len=max(a.length(),b.length());
        for(i=0;i<=len;i++)
        {
            fir[i]=0;
            sec[i]=0;
        }
        rev(fir,sec,a,b);
        x=0;
        for(i=0;i<=len;i++)
        {
            if(fir[i]<sec[i])
            {
                fir[i]+=10;
                fir[i+1]-=1;
            }
            ans[i]=fir[i]-sec[i];                     
        }
        while (ans[len]==0&&len!=0)
        {
            len--;
        }

        for(int i=len;i>=0;i--)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
}