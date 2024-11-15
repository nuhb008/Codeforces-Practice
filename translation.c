#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,c=0,j,n;
    char a[105],b[105];
    scanf("%s",a);
    scanf("%s",b);
    n=strlen(a)-1;
    c=n+1;
    for(j=0,n;a[j]!='\0',n>=0;j++,n--)
    {
    if(a[j]==b[n])
    {
        i++;
    }
    else break;
    }
    //printf("%d",i);
    if(i==c)
    printf("YES");
    else
    printf("NO");
}



