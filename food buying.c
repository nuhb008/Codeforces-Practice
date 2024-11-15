#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,c,n,s,j;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        c=0;
        scanf("%lld",&b);
        a=b+(b-1)/9;
        printf("%lld\n",a);


    }
}
