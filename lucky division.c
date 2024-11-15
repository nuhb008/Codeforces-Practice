#include<stdio.h>
#include<stdlib.h>
int main()
{

    char n[1000];
    gets(n);
    int c=0,f=0,s;
    for(int i=0;n[i]!='\0';i++)
    {
        if(n[i]=='4' || n[i]=='7')
            continue;
        else
        {
            f=1;
            break;
        }

    }
    s=atoi(n);
    printf("%d",s);
    if(f==0)
        printf("YES");
    else
    {
        if(s%4==0 || s%7==0|| s%47==0|| s%74==0|| s%744==0)
            printf("YES");
        else
    {
            printf("NO");
    }
    }
}
