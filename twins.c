#include<math.h>
#include<stdio.h>
int main()
{
    long long a[100005],b[100005],c=0,n,s=0,j=0,t=0,i,k=0,d;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        s+=a[i];
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
   for (i=0; i<n; i++)
   {
       c+=a[i];
       d=s-c;
       k++;
       if(d<c)
         break;


   }
printf("%d",k);
}

