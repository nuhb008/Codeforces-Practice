#include<stdio.h>
#include<math.h>
int main()
{
    long long a,c,r,t,b,n,i,j,d,p=0;
    scanf("%lld",&n);
    for(j=1;j<=n;j++)
    {
        c=0;
        scanf("%lld",&b);
        if(b<=10)
            printf("%lld\n",b);
        else
        {
            c=9;
            p=10;
        for(i=10;i<=b;i+=p)
        {
            if(i==p*10)
            {
                p=p*10;
            }
             c++;

        }
        printf("%lld\n",c);
        }


    }
}
