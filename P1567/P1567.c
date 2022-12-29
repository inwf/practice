#include<stdio.h>
#include<math.h>
int main()
{
    int i,k,n,s=1,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i+1<n;i++)
    {
        if(a[i]<a[i+1])
        {
            s++;
            max=max>s?max:s;
            continue;
        }
        s=1;
    }
    printf("%d",max);
    return 0;
}