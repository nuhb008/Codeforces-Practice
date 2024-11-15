#include<stdio.h>
int main()
{
    int a[100005],i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int c=0,s=0,f=0;
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==-1 && a[j-1]==-1)
                c++;
            if(a[j]==1 && a[j-1]==1)
            f++;

            s+=a[j];
        }
        if(c>0)
        printf("%d\n",s+4);
        else{
        if(f+1==k)
        printf("%d\n",s-4);
        else
        printf("%d\n",s);
        }


    }
}
