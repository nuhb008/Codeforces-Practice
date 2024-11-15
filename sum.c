#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>=b && a>=c)
        {
            if(b+c==a)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if(a<=b && b>=c)
        {
            if(a+c==b)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if(c>=b && a<=c)
        {
            if(b+a==c)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");

    }
}
