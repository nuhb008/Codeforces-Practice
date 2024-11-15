#include<stdio.h>
int main()
{
    int n,j=0,a[5000],c[5000],b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        b=a[i];
        c[b]=i;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",c[i]);
    }


}


