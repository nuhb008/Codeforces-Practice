#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,c,i=1,j,s=0;
    scanf("%lld",&a);
    if(a%2==0)
    {
        c=a/2;
    }
    else
    c=-(a+1)/2;
    printf("%d",c);
}
