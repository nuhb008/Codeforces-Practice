#include<stdio.h>
int main()
{
    int a[100005],i,j,n,c=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
            if(c!=0)
                s++;
            else
            break;
        }
    }
}
