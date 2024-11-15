#include<stdio.h>
int main()
{
    int i=0,j=0,a,n,c=0,k=10000000000,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(j<a && i!=0)
        {
            if(m<a)
            {
                c++;
                m=a;
            }
        }
        if(j>a && i!=0)
        {
            if(k>a)
            {
                c++;
                k=a;
            }

        }

        j=a;
        if(i==0)
        {
            m=a;
            k=a;
        }
    }
    printf("%d",c);
}
