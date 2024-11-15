#include<stdio.h>
int main()
{
    char a[100005];
    int i,j,s=0,b,n,k,c,t;
    scanf("%d",&k);
    for(int x=1;x<=k;x++)
    {
    scanf("%d",&n);
    scanf("%s",&a);
    t=0;
    c=0;
    s=0;
    j=0;
    for(i=0;a[i]!='\0';i++)
    {

        if(a[i]==a[i+1])
            j++;

    }
    if(j+1==strlen(a))
    {
        printf("-1\n");
        continue;

    }
    for(i=0;a[i]!='\0';i++)
    {
        c++;
        if(a[i]=='R')
        {
            if(s==0)
            t=c-1;
            s=1;
        }
        if(a[i]=='L' && s==1)
        {
            s=0;
            t=s;
            break;
        }


    }
        printf("%d\n",t);
    }

}

