#include<stdio.h>
int main()
{
    int i=0,j=0,n,c=0,k=0,m,p,q,l,d;
    char a[1000][1000];
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
        scanf(" %c",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=m;j++)
        {
        if(a[i][j]=='*')
        {
           k++;
           d=i;
        }
        }
       if(k==1)
       {
           p=d;
       }
       k=0;
    }
    for(j=1;j<=m;j++)
        {
        for(i=1;i<=n;i++)
          {
         if(a[i][j]=='*')
        {
            c++;
            l=j;
        }
       }
       if(c==1)
        q=l;

       c=0;
    }
    printf("%d %d",p,q);




}

