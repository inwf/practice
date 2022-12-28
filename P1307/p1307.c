#include<stdio.h>
int main()
{
    int n,s=0,i=1;
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
        i=-i;
    }
    while(n>0)
    {
        s=n%10+s*10;
        n/=10;
    }
    printf("%d",s*i);
}