#include<iostream>
#include<math.h>
using namespace std;
bool Prime(int n);     
void npc(int begin,int cnt,int sum);                                 //判断(不降原则)
int ans=0,n=0;
int x[25];
int k;
int main()
{
    int sum=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    npc(1,0,0);                                                     //判断(不降原则)
    cout<<ans<<endl;
}

void npc(int begin,int cnt,int sum)            //判断(不降原则)      
/*这里想了很久......(为什么?)   
先设    npc(1,0,0);  ,把begin，cnt，sum设为1，0，0       
运行函数npc的时候， 先看第一层↓
     for(int i=begin;i<=n;i++)
    {
        npc(i+1,cnt+1,sum+x[i]);
    }                                          
去里面再次运行npc，外面的i++，再进去进行npc，外面的i再++
进去里面的npc也是这样依次循环

整体来看，(应该)是这样：

1   2   3   4   5   6 

1   2   3   4   5   7

1   2   3   4   5   8

1   2   3   4   6   7

1   2   3   4   6   8

1   2   3   4   7   8

1   2   3   4   8

1   2   3   5   6   7

这种，往右边下标一直在增加，(称为 不降原则？)


*/

{
    if(Prime(sum)&&cnt==k)
    {
        ans++;
        return ;
    }
    for(int i=begin;i<=n;i++)
    {
        npc(i+1,cnt+1,sum+x[i]);
    }

}



bool Prime(int n)
{
    for(int b=2;b<=sqrt(n);b++)
    {
        if(n%b==0)
        return false;
    }
    return true;
}
