#include<iostream>
using namespace std;
int w(int a,int b,int c);                                               
int Ww[21][21][21]={0};
int main()
{
    Ww[0][0][0]=1;
    for(int i=0;i<=20;i++)
    {
        for(int j=0;j<=20;j++)
        {   
            for(int k=0;k<=20;k++)
            {
                Ww[i][j][k]=w(i,j,k);
            }
        }
    }
    int a,b,c;
    while (cin>>a>>b>>c)
    {
        if(a==-1&&b==-1&&c==-1)
        return 0;
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
    }      
}



int w(int a,int b,int c)
{
    if(a<=0||b<=0||c<=0)
    return 1;
    if(a>20||b>20||c>20)
    return Ww[20][20][20];
    //return w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
    return Ww[a-1][b][c]+Ww[a-1][b-1][c]+Ww[a-1][b][c-1]-Ww[a-1][b-1][c-1];
}



/*�ðɣ����ƺ��ѣ���ʵ�����
��ȫ��������w��1~20���Ĵ𰸣��ں�����ֱ�ӷ������鼴��
ʱ�临�Ӷ�O(1) ????
*/
