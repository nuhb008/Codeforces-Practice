#include<stdio.h>
int main()
{
    int i=0,j=0,a,n,c=0,k=1,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);

        k=a-j;
        if(k>=m && i!=0)
            m=k;
        if(j<a && i!=0)
        {
            c++;
        }
        else
        {
            if(k==m)
               c++;

        }
        j=a;
    }
    printf("%d",c);
}
