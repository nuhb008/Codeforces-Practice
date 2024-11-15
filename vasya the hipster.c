#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d ",b);
        printf("%d",(a-b)/2);

    }
    else
    {
        printf("%d ",a);
        printf("%d",(b-a)/2);

    }
}
