#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,k;
    char a[50];
    memset(a,'\0',sizeof(a));
    cin>>n>>a;
    for(i=0;i<strlen(a);i++)  
    {
        if(a[i]+n>'z')
        a[i]=a[i]+n-'z'+'a'-1;
        else
        a[i]=a[i]+n;
    }  
    cout<<a<<endl;
}