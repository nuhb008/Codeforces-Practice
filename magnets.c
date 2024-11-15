#include<stdio.h>
int main()
{
    int i,j,n,k=0,a,b[200005],c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        b[i]=a;
    }
    if(n==1)
        printf("1");
    else
    {
    for(i=0;i<n-1;i++)
    {
        if(b[i]!=b[i+1])
            c++;
    }
    printf("%d",c);

    }
}

