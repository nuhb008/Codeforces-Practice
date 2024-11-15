#include<stdio.h>
int main()
{
    int a[100005],i,j,s=0,b,n,k,t=0,c=0;
    scanf("%d",&k);
    for(int x=1;x<=k;x++)
    {
        c=0;
        s=0;
        t=0;
    scanf("%d",&n);
    if(n%4)
        printf("NO\n");
    else
    {
        printf("YES\n");
        for(i=1;i<=n/2;i++)
        {
            printf("%d ",2*i);
            s+=2*i;
        }
        for(i=1;i<=n;i++)
        {
            if(i%2)
            {
            c++;
            if(c==n/2)
            {

                printf("%d",s-t);
                break;
            }

            printf("%d ",i);
            t+=i;

            }
        }
      printf("\n");
    }
    }
}
