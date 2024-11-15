#include<stdio.h>
#include<math.h>
int main()
{
    long long a[100000],c=1,r,n,t=1,b,i,j;
    scanf("%lld",&n);
    a[0]=1000000000000;
    for(j=1;j<=n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]>=a[j-1])
                {
                    c++;

                }
            else
            {
                c=1;
            }
            if(t<=c)
                t=c;

        }
        if(t>n-(n/10))
            printf("%d",n);
        else
        printf("%lld",t);


}
