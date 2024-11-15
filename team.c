#include<stdio.h>
int main()
{
    int a[1000],b,c,n,i=0,j=1,count=0;
    scanf("%d",&n);
    while(j<=n){
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }

    if((a[0]==1 && a[1]==1) || (a[1]==1 && a[2]==1) || (a[0]==1 && a[2]==1))
            count++;

    j++;
    }
    printf("%d",count);
}
