#include<iostream>
#include<math.h>
using namespace std;
bool Prime(int n);     
void npc(int begin,int cnt,int sum);                                 //�ж�(����ԭ��)
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
    npc(1,0,0);                                                     //�ж�(����ԭ��)
    cout<<ans<<endl;
}

void npc(int begin,int cnt,int sum)            //�ж�(����ԭ��)      
/*�������˺ܾ�......(Ϊʲô?)   
����    npc(1,0,0);  ,��begin��cnt��sum��Ϊ1��0��0       
���к���npc��ʱ�� �ȿ���һ���
     for(int i=begin;i<=n;i++)
    {
        npc(i+1,cnt+1,sum+x[i]);
    }                                          
ȥ�����ٴ�����npc�������i++���ٽ�ȥ����npc�������i��++
��ȥ�����npcҲ����������ѭ��

����������(Ӧ��)��������

1   2   3   4   5   6 

1   2   3   4   5   7

1   2   3   4   5   8

1   2   3   4   6   7

1   2   3   4   6   8

1   2   3   4   7   8

1   2   3   4   8

1   2   3   5   6   7

���֣����ұ��±�һֱ�����ӣ�(��Ϊ ����ԭ��)


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
