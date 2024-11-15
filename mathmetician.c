#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j,c,n;
    char a[1000],b[1000];
    gets(a);
    gets(b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i])
            printf("0");
        else //if(a[i]==b[j])
            printf("1");

    }



}
