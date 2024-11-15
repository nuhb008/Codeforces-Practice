#include<stdio.h>
int main()
{
    int a[100005],b=0,b2=0,y=0,o=0,c=0,i,j=0,k=0,n,s=0,r=0,g=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=1 && a[i]<=399)
        {
            g=1;

        }
        if(a[i]>=400 && a[i]<=799)
        {
            b=1;
        }
        if(a[i]>=800 && a[i]<=1199)
        {
            j=1;
        }
        if(a[i]>=1200 && a[i]<=1599)
        {
            c=1;
        }
        if(a[i]>=1600 && a[i]<=1999)
        {
            b2=1;
        }
        if(a[i]>=2000 && a[i]<=2399)
        {
            y=1;
        }
        if(a[i]>=2400 && a[i]<=2799)
        {
            o=1;
        }
        if(a[i]>=2800 && a[i]<=3199)
        {
            r=1;
        }
        if(a[i]>=3200)
            k++;


    }
    s=g+c+b+b2+y+o+r+j;
    if(s==0)
    printf("%d %d",1,k);
    else
    printf("%d %d",s,s+k);

}
