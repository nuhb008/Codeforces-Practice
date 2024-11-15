#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000]="I hate",b[1000]="I love" ,c[1000];
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2 )
        {
            printf("I hate");

        }
        if(i%2==0)
        {
            printf(" that ");
            printf("I love");
            if(i!=n)
            printf(" that ");
        }

    }
        printf(" it");


}
