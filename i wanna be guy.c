#include<stdio.h>
#include<string.h>
int main()
{
    int a[1000],b[1000];
    int i,j,k,c,n,f,u=0;
    scanf("%d",&n);
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
       scanf("%d",&a[i]);

    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
       scanf("%d",&b[i]);

    }
    for(c=1;c<=n;c++)
    {
    f=0;
    for(i=0;i<j;i++)
    {
       if(c==a[i])
       {
        f=1;
        break;

       }

    }
    if(f==0){
    for(i=0;i<k;i++)
    {
       if(c==b[i])
       {
           f=1;
           break;
       }
    }
    }
    if(f==0)
        u++;
    }
    if(u==0)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");



}

