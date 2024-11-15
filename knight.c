#include<stdio.h>
int main()
{
    int a[100000],b=0,i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]!=0)
        if(a[i]==a[i+2])
            c++;

    }


    if(c>b)
        printf("YES");
    else
        printf("NO");
}
