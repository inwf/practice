#include<iostream>
#include<algorithm>//sort()函数，排序sort(开始指针，结束指针)，从小到大
using namespace std;
bool cmp(string a,string b);//如果返回值为 true，则左在左，右在右，若false，则左右交换
int main()
{
    int n;
    string nums[25];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nums[i];
    }
    sort(&nums[1],&nums[1]+n,cmp);
     for(int i=0;i<=n;i++)
    {
        cout<<nums[i];
    }
    return 0;
}

bool cmp(string a,string b)
{
    return a+b>b+a;                     //不是a>b
}


/*
sort(地址1，地址2)，左闭右开，默认从小到大

原来不是简单的排序输出，又naive啦

a>b不代表a在前面就一定好!!!!!!比如975 > 97 但是 97597 < 97975
*/