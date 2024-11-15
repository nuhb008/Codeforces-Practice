#include<stdio.h>
int main()
{
    int i,j,n,k=0,a[200000],b[200005],c,c1,c2,N;
    scanf("%d",&N);
    while(N--)
    {
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=0;
    for(i=0;i<n;i++)
    {
        c1=100000;
        for(j=0;j<n;j++)
        {
        c2=a[j];
        if(i!=j && c2<a[j])
        {
        c=a[j];
        if(c<c1)
            c1=c;
        else
            continue;
        }
        }
        b[k++]=c2-c;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    }
    return 0;

}
