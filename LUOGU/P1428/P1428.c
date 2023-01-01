#include<stdio.h>
#include<math.h>
int main()
{
    int i,k,n,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(k=0;k<i;k++)
        {
            if(a[i]>a[k])
            s++;
        }
        printf("%d ",s);
    }
    return 0;
}