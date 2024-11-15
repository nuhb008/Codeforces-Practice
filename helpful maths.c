#include<stdio.h>
int main()
{
    char a[100];
    int i,n,c1=0,c2=0,c3=0;
    gets(a);
    for(i=0;a[i]!='\0';i+=2)
    {
        if(a[i]=='1')
            c1++;
        if(a[i]=='2')
            c2++;
        if(a[i]=='3')
            c3++;
    }
    for(i=0;a[i]!='\0';i+=2)
    {
        if(i<2*c1)
        a[i]='1';
        else if(i<2*(c1+c2))
        a[i]='2';
        else if(i<2*(c1+c2+c3))
        a[i]='3';
    }
    puts(a);
}

