#include<iostream>
#include<algorithm>//sort()����������sort(��ʼָ�룬����ָ��)����С����
using namespace std;
bool cmp(string a,string b);//�������ֵΪ true���������������ң���false�������ҽ���
int main()
{
    int n;
    string nums[25];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>nums[i];
    }
    sort(&nums[1],&nums[1]+n,cmp);
     for(int i=0;i<=n;i++)
    {
        cout<<nums[i];
    }
    return 0;
}

bool cmp(string a,string b)
{
    return a+b>b+a;                     //����a>b
}


/*
sort(��ַ1����ַ2)������ҿ���Ĭ�ϴ�С����

ԭ�����Ǽ򵥵������������naive��

a>b������a��ǰ���һ����!!!!!!����975 > 97 ���� 97597 < 97975
*/