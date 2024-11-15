#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,m=0,n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a);
    if(a==0 || a==1 )
        printf("-1\n");
    else
        printf("%d\n",a-1);
    }
}
