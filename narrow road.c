#include<stdio.h>
int main()
{
    int a,i,j,k=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        j=a-i;

        if(j<=k && i!=1)
        {
            k+=1;
            printf("%d\n",k);
        }
        else if(j>k || i==1)
        {
            k=j;
            printf("%d\n",j);
        }
    }
}
