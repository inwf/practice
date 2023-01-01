#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
    int b=2;
    int is=1;
    for(;b<=sqrt(1.0*n);b++)
    {
        is=1;
        if(n%b==0)
        {
            is=0;
            break;
        }
    }
    return is;
}
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    for(a=2;a<n;a++)
    {
        if(isPrime(a)==0)
        continue;
        for(b=2;b<n;b++)
        {
            if(isPrime(b)==0)
            continue;
            for(c=2;c<n;c++)
            {
                if(isPrime(n-a-b)==0)
                continue;
                if(a+b+c==n)
                {
                    printf("%d %d %d",a,b,n-a-b);
                    goto d;
                }
            }
        }
    }
    d:
    return 0;
}