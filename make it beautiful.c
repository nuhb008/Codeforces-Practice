#include<stdio.h>
int main()
{
    int a[100005],i,j,s=0,b,n,k,c,t;
    scanf("%d",&k);
    for(int x=1;x<=k;x++)
    {
    scanf("%d",&n);
    s=0;
    c=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1;i<n;i++)
    {
        if(a[i+1]==a[i])
            c++;
    }
    if(c+1==n)
    {
        printf("NO\n");
        continue;
    }
for (i=1; i<=n-1; i++)
    {
   for (j=i+1; j<=n; j++)
    {
      if (a[i] < a[j])
      {
         t=a[i];
         a[i] = a[j];
         a[j] = t;
      }

   }
}
    b=a[2];
    a[2]=a[n];
    a[n]=b;
    printf("YES\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    }

}
