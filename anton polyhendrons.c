#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j,k=0,c=0;
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
         scanf("%s",&a);
         if(a[0]=='T')
            c=c+4;
         if(a[0]=='C')
            c=c+6;
         if(a[0]=='O')
            c+=8;
         if(a[0]=='D')
            c+=12;
         if(a[0]=='I')
            c+=20;


    }
    printf("%d",c);
}

