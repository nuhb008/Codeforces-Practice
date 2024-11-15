#include<stdio.h>
int main()
{
    int a[1000],b[1000],i,n,j,f=0,d,max=0,min=1000000000,c=0,out;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 1; i < n; ++i)
    {
    if (max < a[i])
        {
      max = a[i];
       f=i;
      }
    if (min > a[i])
        {
      min = a[i];
      c=i;
      }
  }
  out=(f-1)+(n-c);

    printf("%d",out);
}
