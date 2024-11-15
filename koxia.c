#include<stdio.h>
int main()
{
    long long a[100005],b[100005],i,j,s=0,n,m,k,c,t;
    scanf("%lld",&k);
    for(int x=1;x<=k;x++)
    {
    scanf("%lld %lld",&n,&m);
    s=0;
    c=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);

    }
    for(i=1;i<=m;i++)
    {
        scanf("%lld",&b[i]);

    }
    c=m;
if(n>m){
for (i=1; i<=n; i++)
    {
        if(i<=m)
            s+=b[c--];
        else
            s+=a[i];


    }
}
else
{
    for (i=m; i>=n; i--)
    {

            s+=b[i];

    }
}



    printf("%lld\n",s);
}
}



