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
��һ��ֱ���ύ(naive?)->��

�ڶ��ο�������������long long����

�ĸĻ��ǹ��ˡ�

int ���10λ                     long long ��ſ���19λ
*/