#include<stdio.h>
int main()
{
    int n,max,j,k,i,a[100005],b[100005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[n-1];
    b[n-1]=0;

    for(j=n-2;j>=0;j--)
    {
        if(max>=a[j])

        {
            b[j]=max-a[j]+1;
        }
        else
        {
            max=a[j];
            b[j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

}
