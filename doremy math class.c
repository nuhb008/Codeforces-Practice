#include<stdio.h>
#include<math.h>
int main()
{
    int a[10000],c,b,n,i,j,d,p=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b);

        for(j=1;j<=b;j++)
        {
            scanf("%d",&a[j]);
        }
        c=b;
         //printf("%d\n",b);
        for(j=1;j<=b;j++)
        {
            for(int k=1;k<=b;k++)
            {
                d=abs(a[j]-a[k]);
                //printf("%d\n",d);
                if(a[1]<d && d<a[c]){
                p=0;
                for(int l=1;l<=b;l++)
                    {
                       if(d==a[l])
                       {
                       p=1;
                       break;
                       }

                    }
                    if(p==0)
                    {
                       a[b++]=d;


                    }
                }
            }

        }
         printf("%d\n",b);
    }
}
