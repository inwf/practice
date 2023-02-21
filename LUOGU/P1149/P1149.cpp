#include<iostream>
using namespace std;
int nums[10]={6,2,5,5,4,5,6,3,7,6};
int count(int n);
int main()
{
    int ans=0;
    int A,B,n;
    cin>>n;
    for(A=0;A<1500;A++)
    {
        for(B=0;B<1500;B++)
        {
            if(count(A)+count(B)+count(A+B)+4==n)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}

int count(int n)                    //求出火柴数
{
     int sum=0;
     do
     {
        sum+=nums[n%10];            //最后一位
        n/=10;
     } while (n>0);
    return sum;
}