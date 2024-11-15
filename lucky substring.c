#include<stdio.h>
#include<stdlib.h>
int main()
{

    char n[1000];
    gets(n);
    int c=0,c2=0,f=0,s=0,j=0;
    char a[1000];
    for(int i=0;n[i]!='\0';i++)
    {
        if(n[i]=='4' || n[i]=='7')
        {
            if(n[i]=='7' && n[i-1]=='6' || n[i]=='4' && n[i-1]=='3' )
            {
                continue;
            }
            s++;
            a[j++]=n[i];
        }

    }
    a[j]='\0';
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='4')
            c++;
        if(a[i]=='7')
            c2++;
    }

    if(s==0)
        printf("-1");
    else
    {
        if(c>c2)
            printf("4");
        else if(c<c2)
            printf("7");
        else if(c==c2)
            printf("%c",a[0]);
    }
}
