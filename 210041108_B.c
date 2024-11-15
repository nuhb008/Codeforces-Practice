#include<stdio.h>
int main()
{
    int n[10000],c[100000],i,a,b,j;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(j=0;j<b;j++)
    {
        c[j+1]=n[j];
        c[0]=n[b-1];

    }
    for(i=0;i<a;i++)
    {
        printf("%d ",c[i]);
    }
    printf("%d",&c[0]);
}
