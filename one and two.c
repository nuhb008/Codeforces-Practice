#include<stdio.h>
int main()
{
    int a[100000],b[100000],n,i,j,k,c1=0,c2;
    scanf("%d",&n);
    while(n--)
    {
        i=0,c1=0,c2=0,j=0;
        scanf("%d",&k);
        while(k--)
        {
            scanf("%d",&a[i]);
            if(a[i]==2)
            {
                c2++;
                b[c2]=i;

            }
            else
                c1++;
            i++;
        }
        if(c2==0)
            printf("1\n");
        else if(c2%2==0)
        {

               printf("%d\n",b[c2/2]+1);
        }
        else
            printf("-1\n");
    }
}
