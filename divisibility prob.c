#include<stdio.h>
int main()
{
    long long a,b,i,n,j,k;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        j=0;
        scanf("%lld %lld",&a,&b);
        if(a<b)
            printf("%lld\n",b-a);
        else if(a%b==0)
             printf("0\n");
        else{

            k=a/b+1;

            j=(b*k)-a;
        printf("%lld\n",j);
        }

    }
}
