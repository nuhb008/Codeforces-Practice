#include<stdio.h>
int main()
{
    int n,j=0,a,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if(2<=b-a)
            j++;
    }
        printf("%d",j);

}

