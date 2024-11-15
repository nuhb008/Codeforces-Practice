#include<stdio.h>
int main()
{
    int a[1000],i,j,n,c=1,b;
    scanf("%d",&b);
    for(j=1;j<=b;j++)
    {
        c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
       for(int k=i+1;k<=n;k++)
       {
        if(a[i]==a[k])
        {
            c=0;
            break;
        }
       }
    }
    if(c==0)
        printf("NO\n");
    else
        printf("YES\n");

    }
}
