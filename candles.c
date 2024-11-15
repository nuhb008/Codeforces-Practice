#include<stdio.h>
#include<math.h>
int main()
{
    float a,c;
    long long p=0,n,i,j,d,b;
    scanf("%lld",&n);
    for(j=1;j<=n;j++)
    {
        c=0;
        scanf("%lld",&b);

        if(b%2==0)
        {
            d=(b/2)-1;
        }
        else
            d=b/2;

        printf("%lld\n",d);
        }


    }


