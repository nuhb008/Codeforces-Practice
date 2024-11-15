#include<stdio.h>
#include<math.h>
int main()
{
    int a[10000],m[10000],c,b,n,i,j,d,p=0;
    scanf("%d",&n);
    for(d=1;d<=n;d++)
    {
        scanf("%d",&b);
        int k=0;
        for(j=1;j<=b;j++)
        {
            scanf("%d",&a[j]);
        }
        for(i=1;i<=b;i++){
         for(j = i+1; j <= b; j++){
         if(abs(a[i]-a[j])==1 || a[i]==a[j] )
            {
                if(a[i]>=a[j])
                {
                    m[k++]=a[i];
                }
                else
                {
                    m[k++]=a[j];
                }
            }

         }
      }
      printf("%d\n",b);
      if(b==1)
      printf("YES\n");
      else
        printf("NO\n");
   }
}

