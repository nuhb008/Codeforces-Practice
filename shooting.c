#include<math.h>
#include<stdio.h>
int main()
{
    long long a[100005],b[100005],c[10005],n,s=0,j=0,t=0,i,k=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        b[i]=a[i];
    }
for (i=0; i<n-1; i++){
   for (j=i+1; j<n; j++)
    {
      if (a[i] < a[j])
      {
         t=a[i];
         a[i] = a[j];
         a[j] = t;
      }

   }
}
    for(int i=0;i<n;i++)
    {
        s+=(a[i]*i+1);
    }
for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c[k++]=j+1;
                b[j]=-1;
                break;
            }

        }
    }
    printf("%lld\n",s);
    for(int i=0;i<n;i++)
    {
        printf("%lld ",c[i]);
    }

}
