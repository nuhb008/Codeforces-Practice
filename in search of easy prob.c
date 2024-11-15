#include<stdio.h>
int main()
{
    int n,j,a=0,b=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&j);
        if(j==1)
            a++;
    }
    if(a>0)
        printf("Hard");
    else
        printf("Easy");
}
