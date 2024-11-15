#include<stdio.h>
int main()
{
    int n,h,c=0;
    int a[10000];
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=h)
            c=c+1;
        else
            c=c+2;
    }
    printf("%d",c);

}
