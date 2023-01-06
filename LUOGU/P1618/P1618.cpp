#include<iostream>
using namespace std;
bool dif(int a,int b,int c);
int main()
{
    double A,B,C,i=0;
    double first,second,third;
    cin>>A>>B>>C;
    for(first=100;first<333;first++)
    {
        second=B/A*first;
        third=C/A*first;
        if(dif((int)first,(int)second,(int)third))
        {
            cout<<first<<' '<<second<<' '<<third<<endl;
            i++;
        }
    }
    if(i==0)
    cout<<"No!!!"<<endl;
}
bool dif(int a,int b,int c)
{
    int k=0;
    int number[9];
    number[0]=a/100;
    number[1]=(a%100)/10;
    number[2]=a%10;
    number[3]=b/100;
    number[4]=(b%100)/10;
    number[5]=b%10;
    number[6]=c/100;
    number[7]=(c%100)/10;
    number[8]=c%10;
    int barrel[10]={0};
    int i;
    for(i=0;i<9;i++)
    {
        if(number[i]==0)
        return false;
    }
    for(i=0;i<9;i++)
    {
        barrel[number[i]]++;
    }
    for(i=0;i<10;i++)
    {
        if(barrel[i]!=0)
        k++;
    }
    if(k==9)
    return true;
    else
    return false;
}
