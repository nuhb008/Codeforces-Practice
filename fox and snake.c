#include<stdio.h>
int main()
{
    int i=0,j,n,c=0,k;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        for(j=1;j<=k;j++)
        {
            printf("#");
        }
        }
        else
        {
        for(j=1;j<=k;j++)
        {
            if(c==0)
            {

            if(j==k)
            {
                printf("#");
                c=1;
            }
            else
                printf(".");
            }
            else if(c==1)
            {
              if(j==1)
                printf("#");
            else
                printf(".");
             if(j==k)
                  c=0;
            }
        }
        }
        printf("\n");
    }
}
