#include<stdio.h>
int main()
{
    int a[100],b,n,i,j,k,c[100];
    scanf("%d %d",&n,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<b;i++)
    {
    for(j=1;j<n;j++)
        {
            c[n-1]=a[0];
            c[j-1]=a[j];

        }
    for(i=0;i<n;i++)
    {
        a[i]=c[i];
    }

    }

    for(j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
}
