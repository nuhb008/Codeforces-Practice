#include<stdio.h>
#include<string.h>
int main()
{
    int i,f=0;
    char a[10000];
    gets(a);
    if(a[0]>=97 && a[0]<=122)
    {
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
            continue;
        else
            f=1;

    }
    if(f==1)
      puts(a);
    else
    {
    a[0]-=32;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
        a[i]+=32;

    }
    puts(a);
    }
    }
    else
    {
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
            continue;
        else
            f=1;

    }
    if(f==1)
        puts(a);
    else
    {
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
        a[i]+=32;

    }
    puts(a);
    }

    }

}
