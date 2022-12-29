#include<stdio.h>
#include<math.h>
int is(int n)
{
    int b;
    for(b=2;b<=sqrt(1.0*n);b++)
    {
        if(n%b==0)
        return 0;
    }
    return 1;
}
int v(int n)
{
    int s=0;
    while (n>0)
    {
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
int main()
{
    int a,b,n;
    scanf("%d%d",&a,&b);
    n=a;
    if(a%2==0)
    n++;
    if(b>=9989899)
    b=9989899;
    while (n<=b)
    {
        if(n==v(n)&&is(n))
        printf("%d\n",n);
        n+=2;
    }
    return 0;
}