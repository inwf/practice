#include<iostream>
using namespace std;
bool dif(int n1,int n2,int n3);
int main()
{
    int first,second,third,i,k;
    for(i=100;i<333;i++)
    {
        first=i;
        second=2*i;
        third=3*i;
        if(third==801)//²»°üº¬0
        continue;
        if(dif(first,second,third))
        {
            cout<<first<<' '<<second<<' '<<third<<endl;
        }
    }
}
bool dif(int n1,int n2,int n3)
{
    int i,k;
    int number[10]={0};
    number[1]=n1/100;
    n1%=100;
    number[2]=n1/10;
    number[3]=n1%10;
    number[4]=n2/100;
    n2%=100;
    number[5]=n2/10;
    number[6]=n2%10;
    number[7]=n3/100;
    n3%=100;
    number[8]=n3/10;
    number[9]=n3%10;
    for(i=1;i<=8;i++)
    {
        for(k=i+1;k<=9;k++)
        {
            if(number[i]==number[k])
            {
                return false;
            }
        }
    }
    return true;
}