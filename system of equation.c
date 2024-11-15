#include<stdio.h>
int main()
{
    int i=0,j=0,a,b,n,m,c=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(((i*i)+j)==n && (i+(j*j))==m)
                c++;
        }
    }
    printf("%d",c);
}
