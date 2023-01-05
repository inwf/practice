#include<iostream>
#include<string.h>
using namespace std;//0-670-82162-0
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,first,second,third,last;
    char a,b,c,s;
    cin>>first>>a>>second>>b>>third>>c>>s;
    n1=first;
    n2=second/100;
    n3=(second%100)/10;
    n4=second%10;
    n5=third/10000;
    third%=10000;
    n6=third/1000;
    third%=1000;
    n7=third/100;
    third%=100;
    n8=third/10;
    third%=10;
    n9=third;
    
    if(s=='X')
    last=10;
    else
    last=s-'0';
    if(last==(n1+n2*2+n3*3+n4*4+n5*5+n6*6+n7*7+n8*8+n9*9)%11)
    cout<<"Right"<<endl;
    else if((n1+n2*2+n3*3+n4*4+n5*5+n6*6+n7*7+n8*8+n9*9)%11==10)
    cout<<n1<<a<<n2<<n3<<n4<<b<<n5<<n6<<n7<<n8<<n9<<c<<'X'<<endl;
    else
    cout<<n1<<a<<n2<<n3<<n4<<b<<n5<<n6<<n7<<n8<<n9<<c<<(n1+n2*2+n3*3+n4*4+n5*5+n6*6+n7*7+n8*8+n9*9)%11<<endl;
    return 0;
}