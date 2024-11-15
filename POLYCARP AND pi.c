#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,b,c=0;
    char a[10005],d[10005]="3141592653589793238462643383279";
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
    c=0;
    scanf("%s",a);
    b=strlen(a);
    if(a[0]==d[0] && b<=30)
    {
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==d[i])
            c++;
        else
            break;
    }
    }
    printf("%d\n",c);
    }
}
