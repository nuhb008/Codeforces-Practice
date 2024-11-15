
#include<stdio.h>
int main()
{
    long long i,j,n,n2,k,s=0,c=0,m=0;
    scanf("%lld %lld",&n,&k);
    for(i=1;i<=n;i++)
    {
       m=((i+1)*i)/2;


    if(m-(n-i)==k)
    {
    printf("%lld",n-i);
        break;
    }



    }

}
