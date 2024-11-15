#include<stdio.h>
#include<math.h>
int main()
{
    int a,c,d,n,t=0,b,m,i,j;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%a==0 || i%b==0 || i%c==0 || i%d==0  )
            t++;
    }
    printf("%d",t);
}
