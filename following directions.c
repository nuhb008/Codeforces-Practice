#include<stdio.h>
int main()
{
    int i,n,j,k,x,y;
    char a[100005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x=0,y=0;
        int f=0;
        scanf("%d",&k);
        scanf("%s",a);
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]=='U')
                y+=1;
            else if(a[j]=='R')
                x+=1;
            else if(a[j]=='D')
                y-=1;
            else if(a[j]=='L')
                x-=1;
            if(x==1 && y==1)
            {
                printf("YES\n");
                f=1;
                break;
            }

        }
        if(f==0)
            printf("NO\n");
    }

}
