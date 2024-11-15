#include<stdio.h>
int main()
{
    long long a,b,c,n,s,j;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {

        c=0,s=0;
        scanf("%lld",&b);
        a=(b-1)/2;
        for(j=1;j<=a;j++)
        {
            s+=pow(j,2);
        }
        printf("%lld\n",8*s);
    }
}
