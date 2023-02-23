#include<iostream>
using namespace std;
int main()
{
    string Title;
    getline(cin,Title);
    int ans=0;
    for(int i=0;i<Title.length();i++)
    {
        if(Title[i]!=' '&&Title[i]!='\n')
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}

//又是水体