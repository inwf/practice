#include<iostream>
#include<string>
using namespace std;
int main()
{
	int j,n=0,t=0;
	string T,S;	
	getline(cin,S);
	getline(cin,T);			// 	T����	S������Ŀ������
	S=' '+S+' ';
	T=' '+T+' ';
	//int len=
	for(int i=0;i<T.length();i++)			//S,Tȫ��Сд
	{
		if(isupper(T[i]))
		T[i]=tolower(T[i]);
	}
	// for(int i=0;i<S.length();i++) 			��Զ���������ȷ����������ַ���   a.find(b):a����b
	// {										ת��find()��string::npos  		tip:   string::npos==-1		(64����)
	// 	if(isupper(S[i]))
	// 	S[i]=tolower(S[i]);
	// }
	// for(int i=161;i<T.length();i++)
	// {
	// 	if(t==S.length())
	// 	{
	// 		n++;
	// 		number[j++]=i-S.length();
	// 	}
	// 	// if(i==162||i==163||i==164||i==165)
	// 	// cout<<"��"<<S[t]<<"��"<<T[i+1]<<"��"<<endl;
	// 	if(S[t]==T[i])
	// 	{
	// 		t++;
	// 	}else
	// 	t=0;
	// }
	// if(n>0)
	// cout<<n<<' '<<number[0]<<endl;
	// else
	// cout<<-1<<endl;
	if(T.find(S)==string::npos)			//�Ҳ���
	cout<<-1<<endl;
	else
	{
		int number=T.find(S);
		j=T.find(S);
		while (j!=string::npos)			//�ҵõ�
		{
			n++;
			j=T.find(S,j+1);
		}
		cout<<n<<' '<<number;
	}
	return 0;
}