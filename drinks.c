#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,i;
    double b=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b+=a;
    }

    printf("%.12f",b/n);

}
