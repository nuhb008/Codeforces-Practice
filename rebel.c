#include<stdio.h>
int main()
{
    int a[100000],b=0,i,j,k,n,c=0;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
        c=0;
        scanf("%d",&j);

    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<j-1;i++){
    if(a[i]>a[i+1])
        c++;
    }
    printf("%d\n",c);
    }
}
