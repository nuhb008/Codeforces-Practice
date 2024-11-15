#include<stdio.h>
int main()
{
    char c[1000];
    int i,j,n,a,f,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        scanf("%s",&c);
        f=1,b=0;
        for(j=0;j<strlen(c);j++)
        {
            b++;
            if(b%2==0)
            {
               if(c[j]!=c[j+1])
               {
                   f=0;
                   break;
               }
               else
                j++;

            }
        }
        //printf("%d",b);
        if(f==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
