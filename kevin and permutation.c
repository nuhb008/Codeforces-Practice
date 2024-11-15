#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%d",&i);
    for(int j=1;j<=i;j++)
    {

    scanf("%d",&n);
    if(n==3)
        printf("1 2 3");
    else{
    for(int i=1;i<=n/2;i++)
    {
        b=n/2;
        a=b+i;
             printf("%d %d ",a,a-b);
    }
        if(n%2)
             printf("%d",n);
    }
    printf("\n");
    }
    return 0;

}
