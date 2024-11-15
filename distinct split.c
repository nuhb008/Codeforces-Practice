#include<stdio.h>
int main()
{
    int i,n,j,k,x,y,c,l;
    char a[100005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x=0,c=0;
        int r=1,b;
        scanf("%d",&k);
        scanf("%s",a);
        l=strlen(a);
        if(k%2!=0)
        {
            x=k/2;
            y=x+1;
        }
        else{
            x=k/2;
            y=x;
        }
        for(j=0;j<x-1;j++)
        {
            if (a[j] != a[j+1])
                r++;

        }
        if((a[0]==a[x]-1 || a[0]-1 ==a[x]) || a[0]==a[x])
            r++;
        else
        r+=2;
        for(j=x;j<l-1;j++)
        {
            if (a[j] != a[j+1])
                r++;


        }


        printf("%d\n",r);
    }

}
