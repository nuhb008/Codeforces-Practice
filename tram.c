#include<stdio.h>
int main()
{
    int n,a,b,i,j,c=0;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
    scanf("%d %d",&a,&b);
    if(j==1)
        n=b;
    else
    {
        n=n-a+b;
    }
    if(n>c)
        c=n;

    }
    printf("%d",c);
}

