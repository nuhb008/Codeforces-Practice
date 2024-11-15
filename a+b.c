#include<stdio.h>
int main()
{
    int n,i,j,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d+%d",&a,&b);
        printf("%d\n",a+b);
    }
}
