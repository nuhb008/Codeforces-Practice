#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        printf("%d\n",a/2);
        else
            printf("%d\n",(a/2)+1);
    }
}
