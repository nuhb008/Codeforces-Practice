#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int b,n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       int c=0,s=0;
       scanf("%d",&b);
       scanf("%s",a);
       for(j=0;a[j]!='\0';j++)
       {
           if(a[j]==')' && s>=1)
           s--;
           else if(a[j]=='(')
           {
           s++;
           }

       }
       printf("%d\n",s);

    }
}
