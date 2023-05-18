#include <iostream>
#include <algorithm>
using namespace std;

struct goldCoinPile
{
    int w,v;
    double price;
} gold[105];


bool cmp(goldCoinPile a,goldCoinPile b)
{
    return a.price>b.price;
}


int main() 
{
    int N,T;
    while (cin>>N>>T)
    {
        double sum=0;
        for(int i=1;i<=N;i++)
        {
            cin>>gold[i].w>>gold[i].v;
            gold[i].price=1.0*gold[i].v/gold[i].w;
        }
        sort(gold+1,gold+N+1,cmp);
        for(int i=1;i<=N;i++)
        {
            if(T>=gold[i].w)
            {
                sum+=gold[i].v;
                T-=gold[i].w;
            }else
            {
                sum+=T*gold[i].price;
                break;
            }
        }
        printf("%.2f\n",sum);
    }
}