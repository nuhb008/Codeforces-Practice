#include<stdio.h>
int main()
{
    long long int n,j,k,c,b,a;
    scanf("%lld %lld",&n,&b);
    if(n%2==0)
    {
        c=n/2;
    }
    else
    {
        c=(n+1)/2;
    }
    if(b<=c)
    {
        a=2*b-1;
        printf("%lld",a);
    }
    else
    {
        a=(b-c)*2;
        printf("%lld",a);
    }

}



