#include<stdio.h>
long long fact(long long n)
{
    int i=1,f=1;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}

int main()
{
    long long a,b,c,d,s=0,n,i;
    scanf("%lld %lld",&n,&b);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        s+=fact(a);
    }
    d=fact(b);
    if(s%d==0)
    printf("Yes");
    else
        printf("NO");
}
