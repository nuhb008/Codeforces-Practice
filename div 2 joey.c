#include<stdio.h>
int main()
{
    long long a[1000],b,n,i,j,s=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        s=0;
        scanf("%lld",&b);
        for(j=1;j<=b;j++)
        {
            scanf("%lld",&a[j]);
        }
        for(j=2;j<=b;j++)
        {
            a[1]=a[1]*a[j];
            a[j]=1;
        }
        for(j=1;j<=b;j++)
        {
            s=s+a[j];
        }
        printf("%lld\n",s*2022);



    }
}
