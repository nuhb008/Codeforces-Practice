#include<stdio.h>
int main()
{
    char a[1000],ch='\0';
    int c=0,i,m=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=ch)
        ch=a[i];
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==ch)
        c++;
    }
    while(c--)
    {
        printf("%c",ch);
    }
}
