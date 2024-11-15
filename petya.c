#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j,c=0,n=0;
    char a[100],b[100];
    gets(a);
    gets(b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
           a[i]+=32;
        }
    }
    for(i=0;i<strlen(a);i++)
    {
        if(b[i]>=65 && b[i]<=90)
        {
           b[i]+=32;
        }
    }
    for(i=0;i<strlen(a);i++)
    {
        if(b[i]==a[i])
        {
           continue;
        }
        else
        {
            if(a[i]>b[i])
            {
                c=1;
            }
            else
                c=-1;
            break;
        }
    }
    if(c==n)
        printf("0");
    else
        printf("%d",c);


}
