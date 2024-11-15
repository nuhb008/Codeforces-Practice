#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,m[1000],n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
    scanf("%d %d",&a,&b);
    for(j=1;j<=a;j++)
    {
        scanf("%d",&m[j]);
        if(m[j]==1)
            c++;
    }
    if(c>0)
        printf("YES\n");
    else
        printf("NO\n");
    }
}
