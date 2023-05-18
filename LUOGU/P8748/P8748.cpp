#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long haomiao;
    int numbs;
    int cost;
    int hour,min,sec;
    while (cin>>haomiao)
    {
        hour=haomiao/3600000%24;
        min=haomiao/60000%60;
        sec=haomiao/1000%60;
        printf("%02d:%02d:%02d\n",hour,min,sec);
    }
    return 0;
}