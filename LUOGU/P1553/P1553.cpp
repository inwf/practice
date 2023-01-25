#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
void DeLL(long long &n)
{
	while (n%10==0&&n!=0)									//测试点#20为0%	蒟坑！！
	{
		n/=10;
	}
}
int main()
{
	string s,L,R;
	long long l,r,b=0;										//long long最多19位
	getline(cin,s);
	if(s.find('.')!=string::npos||s.find('/')!=string::npos)
	{
		b=s.find('.')!=string::npos? s.find('.'):b;
		b=s.find('/')!=string::npos? s.find('/'):b;
		reverse(s.begin(), s.begin()+b);
		reverse(s.begin()+b+1, s.end());
		L=s;
		R=s;
		L.erase(L.begin()+b, L.end());
		R.erase(R.begin(), R.begin()+b+1);
		l=strtoll(L.c_str(), NULL, 10);
		r=strtoll(R.c_str(), NULL, 10);
		DeLL(l);
		DeLL(r);
		cout<<l<<s[b]<<r<<endl;;
	}else if(s.find('%')!=string::npos)
	{
		b=s.find('%')!=string::npos? s.find('%'):b;
		reverse(s.begin(), s.begin()+b);
		L=s;
		l=strtoll(L.c_str(), NULL, 10);;
		DeLL(l);
		cout<<l<<s[b]<<endl;
	}else
	{
		reverse(s.begin(), s.end());
		l=strtoll(s.c_str(), NULL, 10);
		DeLL(l);
		cout<<l<<endl;
	}
	return 0;
}