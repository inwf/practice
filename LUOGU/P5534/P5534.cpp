#include<iostream>
using namespace std;
int main()
{
    long long a1,a2,d,n,sum;
    cin>>a1>>a2>>n;
    d=a2-a1;
    if(n==1)
    {
        cout<<a1;
        return 0;
    }
    cout<<n*(2*a1+(n-1)*d)/2<<endl;
    return 0;
}





/*
第一次直接提交(naive?)->卒

第二次看讨论区，开了long long，卒

改改还是过了。

int 大概10位                     long long 大概可以19位
*/