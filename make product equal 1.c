#include<stdio.h>
#include<math.h>
int main()
{
    long long a[100005],b,c=0,n,s=0,j=0,k=0;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]<0)
            c++;
        if(a[i]==0)
            j++;
    }
    for(int i=1;i<=n;i++)
    {
        b=a[i];

        if((b<0 ))
        {
            s+=-(b+1);
        }
        else if(b>0)
        {
        s+=b-1;
        }

    }
    if(j)
        s+=j;
    else
    {
        if(c%2!=0)
            s+=2;
    }
    printf("%lld",s);
}
