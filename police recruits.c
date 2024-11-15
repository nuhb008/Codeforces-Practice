#include<stdio.h>
int main()
{
   int a,b=0,c=0,i,n;
   scanf("%d ",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a);
       if(a==-1 &&b!=1)
        c++;
       b=a;

   }
   printf("%d",c);
}
