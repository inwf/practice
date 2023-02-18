#include<iostream>
using namespace std;
int main()
{
    int alphabet[26]={0};
    string a,b,c,d;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    getline(cin,d);
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            alphabet[a[i]-'A']++;
        }
    }
    for(int i=0;i<b.length();i++)
    {
        if(b[i]>='A'&&b[i]<='Z')
        {
            alphabet[b[i]-'A']++;
        }
    }
    for(int i=0;i<c.length();i++)
    {
        if(c[i]>='A'&&c[i]<='Z')
        {
            alphabet[c[i]-'A']++;
        }
    }
    for(int i=0;i<d.length();i++)                       //Í°ÅÅĞò!!!!!!!!!!
    {
        if(d[i]>='A'&&d[i]<='Z')
        {
            alphabet[d[i]-'A']++;
        }
    }
    int max=alphabet[0];
    for(int i=0;i<26;i++)
    {
        max=max>alphabet[i]?max:alphabet[i];
    }
    int len=max;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(alphabet[j]==max)    
            {
                cout<<"*";
                alphabet[j]--;
            }
            else                    cout<<" ";
            if(j!=25)               cout<<" ";
            else                    cout<<"\n";
        }
        max--;
    }
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"<<endl;
}