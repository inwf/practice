#include<stdio.h>
#include<string.h>
int main()
{
    char a[7],b[7];
    int sa=1,sb=1,i,x;
    memset(a,'\0',sizeof(a));
    memset(b,'\0',sizeof(b));
    scanf("%s%s",a,b);
    for(i=0;i<strlen(a);i++)
    {
        x=a[i]-64;
        sa*=x;    
    }
    for(i=0;i<strlen(b);i++)
    {
        x=b[i]-64;
        sb*=x;    
    }
    if(sa%47==sb%47)
    printf("GO\n");
    else
    printf("STAY\n");
    return 0;
}