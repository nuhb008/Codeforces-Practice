#include<stdio.h>
int main()
{
    int a,i,j,k,n,s,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&s,&r);
        j=s-r;
        a=a-1;
        while(r!=0)
        {
            k=r/a;
            printf("%d ",k);
            r-=k;
            a--;

        }
        printf("%d ",j);
        printf("\n");
    }
}
